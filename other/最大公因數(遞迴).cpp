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
	if(a%b==0) return b;
	else
	{
		c=a%b;
		return f(b,c);
	}
}
