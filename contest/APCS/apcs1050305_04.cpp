#include <deque>
#include <iostream>
using namespace std;
int main()
{
    deque<int> tr[100001];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tc, tf;
        cin >> tc >> tf;
        tr[tf].push_back(tc);
    }
}