#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ai, aj;
        bool dc = true;
        string s, temp;
        cin.clear();
        cin.sync();
        cin >> ai >> aj;
        cin.clear();
        cin.sync();
        getline(cin, s);
        if (s.rfind(" ") != string::npos)
            s.resize(s.rfind(" "));
        for (int j = 1; j < ai; j++)
        {
            cin.clear();
            cin.sync();
            getline(cin, temp);
            if (temp.find(" ") != string::npos && dc)
            {
                if (temp.compare(temp.find(" ") + 1, temp.size(), s) == 0)
                {
                    s = temp;
                    if (s.rfind(" ") != string::npos)
                        s.resize(s.rfind(" "));
                }
                else
                {
                    dc = false;
                }
                cout << s << endl;
            }
        }
        if (dc)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}