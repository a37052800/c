#include <iostream>
using namespace std;
int F(int a);
int main()
{
    int n;
    cin >> n;
    cout << F(n) << endl;
}
int F(int a)
{
    if (a <= 1)
    {
        return a;
    }
    else
    {
        return F(a - 1) + F(a - 2);
    }
}