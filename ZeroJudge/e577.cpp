#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int sumdig(int n)
{
    int s = 0;
    while (n != 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}
int main()
{
    int n;
    cin >> n;
    vector<int> mem;
    mem.push_back(1);
    for (int k = 0; k < n; k++)
    {
        int p;
        cin >> p;
        while (1)
        {
            p++;
            for (int i = mem[0] + 1; i <= sqrt(p); i++)
            {
                bool it = 0;
                for (int j = 2; j <= sqrt(i); j++)
                {
                    if (i % j == 0)
                    {
                        it = 1;
                        break;
                    }
                }
                if (it == 0)
                {
                    mem.push_back(i);
                }
            }
            mem[0] = sqrt(p);
            int t = p, ps = 0;
            for (int i = 1; i < mem.size(); i++)
            {
                if (mem[i] > sqrt(t))
                {
                    break;
                }
                if (t % mem[i] == 0)
                {
                    ps += sumdig(mem[i]);
                    t /= mem[i];
                    i = 0;
                }
            }
            ps += sumdig(t);
            if ((sumdig(p) == ps) && (t != p))
            {
                cout << p << endl;
                break;
            }
        }
    }
}