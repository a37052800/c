#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n, count = 1;
    cin >> n;
    while (n > 0)
    {
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << "Game " << count << ":\n";
        while (true)
        {
            int b[n];
            for (int i = 0; i < n; i++)
                cin >> b[i];
            if (b[0] == 0)
                break;
            int A = 0, B = 0;
            int stat[n];
            memset(stat, 0, sizeof(stat));
            for (int i = 0; i < n; i++)
            {
                if (a[i] == b[i])
                    A++;
                for (int j = 0; j < n; j++)
                    if ((!stat[j]) && (b[j] == a[i]))
                    {
                        stat[j] = 1;
                        B++;
                        break;
                    }
            }
            cout << "    (" << A << "," << B - A << ")\n";
        }
        count++;
        cin >> n;
    }
}