#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, max_sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        sum = max(0, sum);
        max_sum = max(sum, max_sum);
    }
    cout << max_sum;
}