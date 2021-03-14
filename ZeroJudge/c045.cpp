#include <iostream>
using namespace std;
int main()
{
    string s[101];
    int max = 0, line = 0;
    while (getline(cin, s[line]))
    {
        if (s[line].size() > max)
            max = s[line].size();
        line++;
    }
    for (int i = 0; i < max; i++)
    {
        for (int j = line - 1; j >= 0; j--)
        {
            if (i >= s[j].size())
                cout << " ";
            else
                cout << s[j][i];
        }
        cout << endl;
    }
}