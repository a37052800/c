#include <cmath>
#include <iostream>
using namespace std;
bool isInt(float);
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int r, p, q;
        cin >> r >> p >> q;
        int i = 0;
        while (true)
        {
            if (isInt((float)(r - p * i) / q))
            {
                cout << abs(i) + abs((r - p * i) / q);
                break;
            }
            else if (isInt((float)(r - q * i) / p))
            {
                cout << abs(i) + abs((r - q * i) / p);
                break;
            }
            else if (i > 0)
                i *= -1;
            else
                i = i * -1 + 1;
        }
    }
}
bool isInt(float n)
{
    if (n == (int)n)
        return true;
    return false;
}
/*
5
2 3 5
4 4 3
13 5 7
99999999 2 9999
1 2 1
*/