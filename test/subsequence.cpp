/*
程式設計與演算法經典
P.2-23
n<m<10^6
1/n^2+1/(n+1)^2+1/(n+2)^2+...+1/m^2

Sample Input
2 4
65536 655360
0 0

Sample Output
0.42361
0.00001
*/
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    while (!(n == m && n == 0))
    {
        double sum = 0;
        for (int i = n; i <= m; i++)
            sum += 1 / ((double)i * i);
        cout.precision(5);
        cout << fixed << sum << endl;
        cin >> n >> m;
    }
}