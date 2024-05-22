#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream fin("Account.csv");
    ofstream fout("account_conv.csv");

    if (fin.fail())
    {
        cout << "Failed to open file" << endl;
        return 1;
    }

    system("chcp 65001");

    string temp;
    string level_name[4];
    int level = 0;
    string first, second, third, forth, name, describe;

    while (getline(fin, temp))
    {
        first = temp.substr(0, temp.find(','));
        if (!first.empty())
            level = 1;
        temp = temp.substr(temp.find(',') + 1);
        second = temp.substr(0, temp.find(','));
        if (!second.empty())
            level = 2;
        temp = temp.substr(temp.find(',') + 1);
        third = temp.substr(0, temp.find(','));
        if (!third.empty())
            level = 3;
        temp = temp.substr(temp.find(',') + 1);
        forth = temp.substr(0, temp.find(','));
        if (!forth.empty())
            level = 4;
        temp = temp.substr(temp.find(',') + 1);
        name = temp.substr(0, temp.find(','));
        level_name[level - 1] = name;
        temp = temp.substr(temp.find(',') + 1);
        describe = temp;
        for (int i = level; i < 4; i++)
            level_name[i] = "";

        fout << level_name[0] << ":" << level_name[1] << ":" << level_name[2] << ":" << level_name[3]
             << "," << name << "," << first << second << third << forth << "," << describe << ","
             << ","
             << ","
             << "TWD"
             << ","
             << "CURRENCY"
             << ","
             << "F"
             << ","
             << "F"
             << "," << char(level == 4 ? 'F' : 'T') << '\n';
    }

    fin.close();
    fout.close();
    return 0;
}
