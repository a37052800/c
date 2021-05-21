#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int k = 0; k < n; k++)
    {
        int p;
        cin >> p;
        int t = p, s=0;
        while (t != 0)
        {
            s += t % 10;
            t /= 10;
        }
        //cout << s;
        for (int i = 2; i <= sqrt(p);i++)
        {
            p
        }
    }
}