#include <iostream>
#include <dirent.h>
#include <windows.h>
#include <fstream>
#include <string>
#include <sstream>
#include <locale>
#include <codecvt>
using namespace std;

int main(int argc, char const *argv[])
{
    string path = argv[0];
    path = path.substr(0, path.find_last_of("\\"));
    string path_temp = path;
    for (int i = 0; i < path_temp.size(); i++)
    {
        if (path_temp[i] == '\\')
        {
            path_temp[i] = '/';
        }
    }
    cout << "Speed: ";
    double speed = 2;
    cin >> speed;
    cout<< "Output file type: ";
    string type = "mp4";
    cin >> type;
    ofstream fout("list.txt");
    DIR *dir = opendir(path.c_str());
    struct dirent *entry;
    int count = 0;
    while ((entry = readdir(dir)) != NULL)
    {
        if (entry->d_name[0] == '.')
            continue;
        if (entry->d_type == DT_DIR)
        {
            DIR *subdir = opendir((path + "\\" + entry->d_name).c_str());
            struct dirent *subentry;
            while ((subentry = readdir(subdir)) != NULL)
            {
                if (subentry->d_name[0] == '.')
                    continue;
                if (subentry->d_type == DT_DIR)
                {
                    DIR *subsubdir = opendir((path + "\\" + entry->d_name + "\\" + subentry->d_name).c_str());
                    struct dirent *subsubentry;
                    while ((subsubentry = readdir(subsubdir)) != NULL)
                    {
                        if (subsubentry->d_name[0] == '.')
                            continue;
                        if (subsubentry->d_type == DT_DIR)
                        {
                            DIR *subsubsubdir = opendir((path + "\\" + entry->d_name + "\\" + subentry->d_name + "\\" + subsubentry->d_name).c_str());
                            struct dirent *subsubsubentry;
                            while ((subsubsubentry = readdir(subsubsubdir)) != NULL)
                            {
                                if (subsubsubentry->d_name[0] == '.')
                                    continue;
                                fout << "file 'file:" << path_temp + "/" + entry->d_name + "/" + subentry->d_name + "/" + subsubentry->d_name + "/" + subsubsubentry->d_name << "'\n";
                                count++;
                            }
                        }
                    }
                }
            }
        }
    }
    closedir(dir);
    fout.close();

    cout<<"file_count: "<<count<<endl<<"Processing..."<<endl;
    Sleep(2500);
    system(("ffmpeg.exe -hwaccel auto -fflags +genpts -f concat -safe 0 -i \"list.txt\" -an -sn -filter:v \"setpts=1/" + to_string(speed) + "*PTS\" -r 30 -y output." + type).c_str());
    system("pause");
    system("del list.txt");
    return 0;
}
