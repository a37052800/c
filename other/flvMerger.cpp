#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <cstdlib>

using byte = unsigned char;

struct FlvHeader {
    byte type[3];
    byte version;
    byte typeFlag;
    byte headerLength[4];
};

struct FlvTag {
    byte tagType;
    byte dataSize[3];
    byte timestamp[3];
    byte timestamp_extension;
    byte streamID[3];
};

bool is_big_endian() {
    int i = 0x1;
    return *(char *)&i != '\x1';
}

void quit(const std::string &msg, int exitStatus) {
    std::cerr << msg;
    std::exit(exitStatus);
}

int intval(const byte *bits, int size) {
    if (bits == nullptr || size < 1 || size > 4) {
        quit("invalid bits(is NULL?) or size(out of [1,4]?) when calling intval\n", 1);
    }
    int ret = 0;
    if (is_big_endian()) {
        return *(int *)bits;
    }
    for (int i = 0; i < size; ++i) {
        ret = (int)bits[i] + (ret << 8);
    }
    return ret;
}

std::vector<byte> byteval(int value, int size) {
    if (size < 1 || size > 4) {
        quit("invalid size(out of [1,4]?) when calling byteval\n", 1);
    }
    std::vector<byte> bits(4, 0);
    byte *p = (byte *)&value;
    if (is_big_endian()) {
        *(int *)bits.data() = value;
    } else {
        for (int i = 0; i < 4; ++i) {
            bits[i] = p[3 - i];
        }
    }
    return std::vector<byte>(bits.begin() + 4 - size, bits.end());
}

double doubleval(const byte *bits) {
    if (bits == nullptr) {
        quit("invalid bits(is NULL?)\n", 1);
    }
    static byte reverse_bits[8] = {0};
    if (is_big_endian()) {
        *(double *)reverse_bits = *(double *)bits;
    } else {
        for (int i = 0; i < 8; ++i) {
            reverse_bits[i] = bits[7 - i];
        }
    }
    return *(double *)reverse_bits;
}

std::vector<byte> bytevaldouble(double value) {
    static byte bits[8] = {0};
    byte *p = (byte *)&value;
    if (is_big_endian()) {
        *(double *)bits = value;
    } else {
        for (int i = 0; i < 8; ++i) {
            bits[i] = p[7 - i];
        }
    }
    return std::vector<byte>(bits, bits + 8);
}

FlvHeader *flv_header_read(std::ifstream &fp, FlvHeader *header) {
    return fp.read(reinterpret_cast<char *>(header), sizeof(FlvHeader)) ? header : nullptr;
}

bool flv_is_valid_header(const FlvHeader *header) {
    return header && header->type[0] == 'F' && header->type[1] == 'L' && header->type[2] == 'V' && ((header->typeFlag | 5) == 5);
}

byte *flv_tag_read(std::ifstream &fp, FlvTag *tag, int *dataSize, int *previousSize) {
    static std::vector<byte> _tagData;
    int tagSize = 0;
    if (!fp.read(reinterpret_cast<char *>(tag), sizeof(FlvTag))) {
        return nullptr;
    }
    tagSize = intval(tag->dataSize, 3);

    if (_tagData.size() < tagSize) {
        _tagData.resize(tagSize);
    }

    if (!fp.read(reinterpret_cast<char *>(_tagData.data()), tagSize) || !fp.read(reinterpret_cast<char *>(previousSize), sizeof(int))) {
        quit("FLV tag data(broken tag data or broken previous size?) is broken.\n", 1);
    }
    *dataSize = tagSize;
    *previousSize = *(int *)byteval(*previousSize, 4).data();
    return _tagData.data();
}

int stupid_byte_indexof(const byte *search, int searchLength, const byte *data, int dataSize) {
    if (search == nullptr || data == nullptr || dataSize < searchLength || searchLength < 1) {
        quit("invalid arguments when searching", 1);
    }
    for (int i = 0; i <= dataSize - searchLength; ++i) {
        if (std::memcmp(data + i, search, searchLength) == 0) {
            return i;
        }
    }
    return -1;
}

byte *flv_scriptdata_strip_keyframes(FlvTag *tag, byte *scripttagData, int *dataSize) {
    byte hasKeyframes[] = {'h', 'a', 's', 'K', 'e', 'y', 'f', 'r', 'a', 'm', 'e', 's', '\x1'};
    byte keyframes[] = {'\x0', '\x9', 'k', 'e', 'y', 'f', 'r', 'a', 'm', 'e', 's', '\x3'};
    int len = sizeof(hasKeyframes) / sizeof(byte);
    int index;

    if (!tag || tag->tagType != 0x12 || !scripttagData || !dataSize) {
        quit("can't strip non-scriptdata's[null or video/audio tag data?] keyframes or null pointer", 1);
    }

    index = stupid_byte_indexof(hasKeyframes, len, scripttagData, *dataSize - 1);
    if (index != -1) {
        scripttagData[index + len] = '\x0';
    }
    index = stupid_byte_indexof(keyframes, sizeof(keyframes) / sizeof(byte), scripttagData, *dataSize);
    if (index != -1) {
        *dataSize = index;
        auto ds = byteval(index, 3);
        std::memcpy(tag->dataSize, ds.data(), 3);
    }
    return scripttagData;
}

int flv_tag_write(std::ofstream &fp, FlvTag *tag, byte *tagData, int *dataSize, int *previousSize) {
    if (!fp.write(reinterpret_cast<char *>(tag), sizeof(FlvTag)) ||
        !fp.write(reinterpret_cast<char *>(tagData), *dataSize) ||
        !fp.write(reinterpret_cast<char *>(previousSize), sizeof(int))) {
        return 0;
    }
    return sizeof(FlvTag) + *dataSize * sizeof(byte) + sizeof(int);
}

double flv_tag_get_duration(byte *tagData, int dataSize, int *offset) {
    byte search[9] = {'d', 'u', 'r', 'a', 't', 'i', 'o', 'n', '\0'};
    int index = stupid_byte_indexof(search, 9, tagData, dataSize);

    if (index == -1) {
        quit("Sorry, can't get flv meta duration.", 1);
    }

    index += sizeof(search) / sizeof(byte);
    if (offset) {
        *offset = index;
    }
    return doubleval(tagData + index);
}

int flv_tag_get_timestamp(FlvTag *tag) {
    if (!tag) {
        return -1;
    }
    return ((int)(tag->timestamp_extension) << 24) + intval(tag->timestamp, 3);
}

int flv_tag_set_timestamp(FlvTag *tag, int timestamp) {
    if (!tag || timestamp < 0) {
        return -1;
    }
    tag->timestamp_extension = timestamp >> 24;
    auto ts = byteval(timestamp & 0x00FFFFFF, 3);
    std::memcpy(tag->timestamp, ts.data(), 3);
    return timestamp;
}

int main(int argc, char *argv[]) {
    if (argc < 4) {
        std::cerr << "Usage: " << argv[0] << " flvtobesaved speed_factor 1stflv [2ndflv [3rdflv [...]]]\n";
        return 1;
    }

    FlvHeader header;
    FlvTag tag;
    byte *tagData;
    std::ofstream fpdst(argv[1], std::ios::binary);
    if (!fpdst) {
        std::cerr << "Can't write to file '" << argv[1] << "'\n";
        return 1;
    }

    double speed_factor = std::atof(argv[2]);
    if (speed_factor <= 0) {
        std::cerr << "Invalid speed factor '" << argv[2] << "'\n";
        return 1;
    }

    int frame_skip_interval = static_cast<int>(1.0 / speed_factor);

    int srccount = argc - 3;
    int headerLength, duration_index = 0, prevSize, dataSize, offset, foundduration = 0, zero = 0;
    int basetimestamp[2], lasttimestamp[2] = {0};
    double duration = 0.0;
    int bts = 0;

    for (int i = 0; i < srccount; ++i) {
        std::ifstream fpsrc(argv[i + 3], std::ios::binary);
        if (!fpsrc) {
            std::cerr << "Can't open file '" << argv[i + 3] << "'\n";
            return 1;
        }

        if (!flv_header_read(fpsrc, &header) || !flv_is_valid_header(&header)) {
            std::cerr << "The header of file '" << argv[i + 3] << "' is broken or is not FLV header.\n";
            return 1;
        }

        if (i == 0) {
            fpdst.write(reinterpret_cast<char *>(&header), sizeof(FlvHeader));
            fpdst.write(reinterpret_cast<char *>(&zero), sizeof(int)); // the first previous tag size is 0
            duration_index = sizeof(FlvHeader);
        }

        headerLength = intval(header.headerLength, 4);

        if (fpsrc.seekg(headerLength + 4, std::ios::beg).fail()) { // skip to real flv tag data(skip the first previous tag size, +4)
            std::cerr << "The first previousSize(should be 0) of file '" << argv[i + 3] << "' is broken.\n";
            return 1;
        }

        bts = static_cast<int>(duration * 1000);
        basetimestamp[0] = lasttimestamp[0];
        basetimestamp[1] = lasttimestamp[1];
        if (bts < basetimestamp[0]) {
            bts = basetimestamp[0];
        }
        if (bts < basetimestamp[1]) {
            bts = basetimestamp[1];
        }
        foundduration = 0;

        int frame_count = 0;

        while ((tagData = flv_tag_read(fpsrc, &tag, &dataSize, &prevSize))) {
            frame_count++;

            if (frame_count % frame_skip_interval != 0) {
                continue; // Skip this frame
            }

            if (tag.tagType == 0x12 && !foundduration) { // if script data and duration not found, try to get duration
                duration += flv_tag_get_duration(tagData, dataSize, &offset);
                foundduration = 1;
                if (i == 0) { // prepare the script data for writing, we choose the first FLV file header as sample
                    duration_index += 4 + sizeof(FlvTag) + offset;
                    flv_scriptdata_strip_keyframes(&tag, tagData, &dataSize);
                    flv_tag_write(fpdst, &tag, tagData, &dataSize, &prevSize);
                }
            } else if (tag.tagType == 0x8 || tag.tagType == 0x9) {
                lasttimestamp[tag.tagType - 0x8] = bts + flv_tag_get_timestamp(&tag);
                flv_tag_set_timestamp(&tag, lasttimestamp[tag.tagType - 0x8]);
                flv_tag_write(fpdst, &tag, tagData, &dataSize, &prevSize);
                if (i == 0 && !foundduration) {
                    duration_index += 4 + sizeof(FlvTag) + dataSize;
                }
            }
        }

        std::cout << "completely merging file '" << argv[i + 3] << "' to '" << argv[1] << "'\n";
    }

    if (fpdst.seekp(duration_index, std::ios::beg).fail()) {
        quit("can't seek to duration\n", 1);
    }
    auto duration_bytes = bytevaldouble(duration);
    fpdst.write(reinterpret_cast<char *>(duration_bytes.data()), 8); // save real duration to file

    return 0;
}