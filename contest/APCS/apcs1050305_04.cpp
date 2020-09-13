#include <cstring>
#include <deque>
#include <iostream>
using namespace std;
deque<int> tr[100001];
int v[100001];
void dfs(int x, int d);
int main()
{
    memset(v, 0, sizeof(v));
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        tr[i].clear();
    }
    for (int i = 0; i < n - 1; i++)
    {
        int tc, tf;
        cin >> tc >> tf;
        tr[tf].push_back(tc);
        tr[tc].push_back(tf);
    }
    v[0] = 1;
    dfs(0, 1);
    int max = -1, st;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
            st = i;
        }
    }
    memset(v, 0, sizeof(v));
    v[st] = 1;
    dfs(st, 1);
    max = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > max)
            max = v[i];
    }
    cout << max - 1;
}
void dfs(int x, int d)
{
    for (int i = 0; i < tr[x].size(); i++)
    {
        if (v[tr[x][i]] == 0)
        {
            v[tr[x][i]] = d + 1;
            dfs(tr[x][i], d + 1);
        }
    }
}