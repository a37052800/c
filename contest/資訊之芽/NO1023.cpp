#include <iostream>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int an[n], l[q], r[q];
    for (int i = 0; i < n; i++)
    {
        cin >> an[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> l[i] >> r[i];
    }
    for (int i = 0; i < q; i++)
    {
        int x = 0;
        int lD = 0, lU = n - 1;
        while (lU - lD > 1)
        {
            if (an[lD] >= l[i])
                x++;
            int M = (lU + lD) / 2;
            if (an[M] <= l[i])
                lD = M;
            if (an[M] >= l[i])
                lU = M;
        }
        int rD = 0, rU = n - 1;
        while (rU - rD > 1)
        {
            if (an[rU] <= r[i])
                x++;
            int M = (rU + rD) / 2;
            if (an[M] <= r[i])
                rD = M;
            if (an[M] >= r[i])
                rU = M;
        }
        cout << rU - lU + x << endl;
    }
    return 0;
}
