#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> a;
    set<int> b;
    a.insert(1);
    b.insert(1);
    a.insert(6);
    a.insert(1);
    cout << a.size();
    cout << a.count(6);
    a.insert(b.begin(), b.end());
}