#include <iostream>
#include <string>
using namespace std;
int rem(string m, int x) //大數-求餘數
{
    for (int i = 0; i < m.size(); i++)//將Char轉為int
    {
        m[i] = m[i] - '0';
    }
    for (int i = 0; i < m.size(); i++)
    {
        if (m[i] < x)
        {
            if (i == m.size() - 1)
            {
                return m[i];
            }
            m[i + 1] = m[i] * 10 + m[i + 1];
            m[i] = 0;
        }
        else
        {
            m[i] = m[i] % x;
            i--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for (int nt = 0; nt < n; nt++)
    {
        string m;
        cin >> m;
        int sn;
        cin >> sn;
        int s[sn];
        for (int i = 0; i < sn; i++)
        {
            cin >> s[i];
        }
        int x = 0;
        for (int i = 0; i < sn; i++)
        {
            if (rem(m, s[i]) != 0) //將m分別除以每個s
            {
                x = 1;
                break;
            }
        }
        if (x == 0)//整除
        {
            cout << m << " - Wonderful." << endl;
        }
        else//不整除
        {
            cout << m << " - Simple." << endl;
        }
    }
}