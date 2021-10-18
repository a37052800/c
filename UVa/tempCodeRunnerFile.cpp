#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    string sa, sb;
    while (cin >> sa >> sb)
    {
        if (sa == "0" && sb == "0")
            break;
        int a[11], b[11];
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        for (int i = 0; i < 10; i++)
        {
            if (i < sa.size())
                a[i] = sa[i] - 48;
            if (i < sb.size())
                b[i] = sb[i] - 48;
        }
        int carry = 0;
        for (int i = 0; i < 10; i++)
        {
            if (a[i] + b[i] > 9)
            {
                carry++;
                a[i + 1]++;
            }
        }
        if (carry == 0)
            cout << "No carry operation." << endl;
        else if (carry == 1)
            cout << "1 carry operation." << endl;
        else
            cout << carry << " carry operations." << endl;
    }
}