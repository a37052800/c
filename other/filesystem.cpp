#include <iostream>
#include <dirent.h>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ofstream out("list.txt");
    string path = "C:\\Users\\Tim\\Desktop\\CCustab";
    DIR *dir = opendir(path.c_str());
    struct dirent *entry;
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
                                out <<"file 'file:" << path + "/" + entry->d_name + "/" + subentry->d_name + "/" + subsubentry->d_name + "/" + subsubsubentry->d_name << "'\n";
                            }
                        }
                    }
                }
            }
        }
    }
    closedir(dir);
    out.close();
    return 0;
}
