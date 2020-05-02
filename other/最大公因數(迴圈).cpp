#include <iostream>
using namespace std;
long f(long a,long b);
int main()
{
	long x,y;
	cin>>x>>y;
	cout<<f(x,y);
	return 0;
}
long f(long a,long b)
{
	long c;
	while (a%b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	return b;
}
