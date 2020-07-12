#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int h, w, max_a;
    cin >> h >> w;
    int a[h][w];
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> a[i][j];
            a[i][j] = 1 - a[i][j];
        }
    }
    for (int i = 1; i < h; i++)
    {
        for (int j = 1; j < w; j++)
        {
            if ((a[i][j] != 0) && (min(a[i - 1][j], min(a[i][j - 1], a[i - 1][j - 1])) >= a[i][j]))
            {
                if ((a[i - 1][j] == a[i][j - 1]) && (a[i - 1][j] == a[i - 1][j - 1]))
                {
                    a[i][j] = a[i - 1][j] + 1;
                }
                else
                {
                    a[i][j] = min(a[i - 1][j], min(a[i][j - 1], a[i - 1][j - 1])) + 1;
                }
            }
            max_a = max(max_a, a[i][j]);
        }
    }
    cout << max_a * max_a;
}