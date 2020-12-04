#include <iostream>
using namespace std;
int main()
{
    int x,c=0/*,i=1*/;
    cin >> x;
    /*while(i<x/i)
    {
        if(x%i==0)
        {
            c += i + (x / i);
            i++;
        }
        else
        {
            i++;
        }
    }*/
    for (int i = 1; i < x / i; i++)
    {
        if ((x % i) == 0)
            c += i + (x / i);
    }
    cout << c-x;
}
