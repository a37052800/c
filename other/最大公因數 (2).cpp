#include <iostream>
using namespace std;
long f1(long a,long b);
long f2(long a,long b);
int main()
{
	long x,y;
	cin>>x>>y;
	cout<<f1(x,y)<<endl;
	cout<<f2(x,y);
	return 0;
}
long f1(long a,long b)
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
long f2(long a,long b)
{
	long c;
	if(a%b==0) return b;
	else
	{
		c=a%b;
		return f2(b,c);
	}
}
