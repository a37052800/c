#include <deque>
#include <iostream>
using namespace std;
deque<int> tr[100001];
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        tr[i].clear();
    for (int i = 0; i < n - 1; i++)
    {
        int tc, tf;
        cin >> tc >> tf;
        tr[tf].push_back(tc);
    }
}