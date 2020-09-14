#include <deque>
#include <iostream>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    for (int i = 0; i < 2; i++)
        cout << dq[i];
    cout << endl;
    dq.clear();
    for (int i = 0; i < 2; i++)
        cout << dq[i];
    cout << endl;
    dq.push_back(3);
    dq.push_back(4);
    for (int i = 0; i < 2; i++)
        cout << dq[i];
}