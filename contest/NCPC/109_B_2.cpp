#include <iostream>
#include <cstring>
using namespace std;
void solve_3(int *trunc, int *mod)
{
    int r_trunc[3], r_mod[3];
    for (int i = 0; i < 3; i++)
    {
        r_trunc[i] = -1;
        r_mod[i] = -1;
    }
    for (int i = 0; i < 3; i++)
    {
        if (*(trunc + i) != -1)
            r_trunc[*(trunc + i)] = i;
        if (*(mod + i) != -1)
            r_mod[*(mod + i)] = i;
    }
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        if (r_trunc[i] == -1)
        {
            for (int j = 0; j < 3; j++)
            {
                if (*(trunc + j) == -1)
                {
                    int *new_trunc = (int *)malloc(3 * sizeof(int));
                    memcpy(new_trunc, trunc, 3 * sizeof(int));
                    *(new_trunc + j) = i;
                    solve_3(new_trunc, mod);
                    return;
                }
            }
        }
        sum += r_trunc[i];
    }
    for (int i = 0; i < 3; i++)
    {
        if (r_mod[i] == -1)
        {
            for (int j = 0; j < 3; j++)
            {
                if (*(mod + j) == -1)
                {
                    int *new_mod = (int *)malloc(3 * sizeof(int));
                    memcpy(new_mod, mod, 3 * sizeof(int));
                    *(new_mod + j) = i;
                    solve_3(trunc, new_mod);
                    return;
                }
            }
        }
        sum += r_mod[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << r_trunc[i] << " " << r_mod[i] << endl;
    }
    if (sum != 6)
        return;
    
}
int main()
{
    int n;
    cin >> n;
    while (n)
    {
        if (n == 1)
        {
            cout << "1" << endl
                 << "-" << endl;
        }
        if (n == 3)
        {
            int fl[3];
            for (int i = 0; i < n; i++)
                cin >> fl[i];
            int trunc[3], mod[3];
            for (int i = 0; i < 3; i++)
            {
                trunc[i] = -1;
                mod[i] = -1;
            }
            for (int i = 0; i < 3; i++)
            {
                if (fl[i] > 0)
                {
                    trunc[(fl[i] - 1) / 3] = i;
                    mod[(fl[i] - 1) % 3] = i;
                }
            }
            solve_3(trunc, mod);
        }
        cin >> n;
    }
}