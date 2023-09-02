#include <iostream>
#include <dirent.h>
using namespace std;

int main(int argc, char const *argv[])
{
    DIR *dirp = opendir("./");
    if (!dirp)
        cout << "error\n";
    while (1)
    {
        dirent *entry = readdir(dirp);
        if (!entry)
            break;
        cout << entry->d_name << '\n';
    }
    closedir(dirp);
    return 0;
}
