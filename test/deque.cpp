#include <deque>
#include <iostream>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    cout << dq[0];
    dq.pop_front();
    cout << dq[0];
    cout << endl;
    dq.clear();
    dq.push_back(3);
    dq.push_back(4);
    int t = dq.back();
    cout << t << endl;
    dq.pop_back();
    cout << dq.back() << dq.front();
}