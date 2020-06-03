#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int q;
    cin >> q;
    string f[q];
    for (int i = 0; i < q; i++)
    {
        cin.clear();
        cin.sync();
        getline(cin, f[i]);
    }
    for (int i = 0; i < q; i++)
    {
        stringstream ss;
        ss.clear();
        ss.str(f[i]);
        string com;
        ss >> com;
        if (com == "insert")
        {
            int n;
            string c;
            ss >> n >> c;
            s.insert(n, c);
        }
        if (com == "delete")
        {
            int l, r;
            ss >> l >> r;
            s.erase(l - 1, r - l + 1);
        }
        if (com == "reverse")
        {
            int l, r;
            ss >> l >> r;
            for (int j = 0; j <= (r - l) / 2; j++)
            {
                char tem;
                tem = s[l + j - 1];
                s[l + j - 1] = s[r - j - 1];
                s[r - j - 1] = tem;
            }
        }
    }
    cout << s << endl;
    cout << "\n";
    return 0;
}
