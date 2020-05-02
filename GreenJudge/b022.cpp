#include <iostream>

using namespace std;
int s=0;
int f(int n);

int main()
{
    int n;
    cin>>n;
    cout<<f(n);
    cout<<" "<<s;
    return 0;
}

int f(int n)
{
    s++;
    if(n<=0) return 0;
    if(n==1) return 1;
    return f(n-1)+f(n-2);
}
