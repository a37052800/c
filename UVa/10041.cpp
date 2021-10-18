#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int r;
        cin >> r;
        int num[r];
        memset(num, 0, sizeof(num));
        for (int j = 0; j < r; j++)
            cin >> num[j];
        sort(num, num + r);
        int sum = 0, mid = r % 2 == 0 ? (num[r / 2 - 1] + num[r / 2]) / 2 : num[r / 2];
        for (int j = 0; j < r; j++)
            sum += abs(num[j] - mid);
        cout << sum << endl;
    }
}