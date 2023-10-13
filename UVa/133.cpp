#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N, k, m;
    while (cin >> N >> k >> m)
    {
        if ((N == 0) && (m == 0) && (k == 0))
            break;
        int arr[N + 1], index_A = 0, index_B = N + 1, pn = N;
        memset(arr, 0, sizeof(arr));
        while (pn > 0)
        {
            if (pn < N)
                cout << ",";
            for (int i = 0; i < k; i++)
            {
                index_A = index_A % N + 1;
                if (arr[index_A] == 1)
                    i--;
            }
            for (int i = 0; i < m; i++)
            {
                index_B = (index_B + N - 2) % N + 1;
                if (arr[index_B] == 1)
                    i--;
            }
            if (index_A == index_B)
            {
                cout << setw(3) << index_A;
                pn--;
            }
            else
            {
                cout << setw(3) << index_A << setw(3) << index_B;
                pn -= 2;
            }
            arr[index_A] = 1;
            arr[index_B] = 1;
        }
        cout << '\n';
    }
    return 0;
}