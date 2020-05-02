#include <iostream>
using namespace std;
long f(int x);
int main()
{
	int n;
	cin>>n;
	cout<<f(n);
	return 0;
}
long f(int x)
{
	if(x==1) return 1;
	else return x*f(x-1);
}
