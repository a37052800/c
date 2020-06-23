#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int l = 0; l < n; l++)
    {
        int ai, aj;
        cin >> ai >> aj;
        string s[ai];
        for (int i = 0; i < ai; i++)
        {
            cin.clear();
            cin.sync();
            getline(cin, s[i]);
        }
        for (int k = 0; k < 2 * aj - 2; k += 2)
        {
            for (int i = 0 + 1, j = k + 2; i < ai && j < 2 * aj - 1; i++, j += 2)
            {
                if (s[i][j] != s[i - 1][j - 2])
                {
                    cout << "No" << endl;
                    goto ENDCC;
                }
            }
        }
        for (int k = 1; k < ai - 1; k++)
        {
            for (int i = k + 1, j = 0 + 2; i < ai && j < 2 * aj - 1; i++, j += 2)
            {
                if (s[i][j] != s[i - 1][j - 2])
                {
                    cout << "No" << endl;
                    goto ENDCC;
                }
            }
        }
        cout << "Yes" << endl;
    ENDCC:;
    }
}