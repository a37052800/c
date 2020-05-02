#include <iostream>
using namespace std;
long f1(int x);
long f2(int x);
int main()
{
	int n;
	cin>>n;
	cout<<f1(n)<<endl; //°j°éª© 
	cout<<f2(n)<<endl; //»¼°jª© 
	return 0;
}
//°j°éª© 
long f1(int x)
{
	long y=1,i;
	for(i=1;i<=x;i++) y=y*i;
	return y;
}
//»¼°jª© 
long f2(int x)
{
	if(x==1) return 1;
	else return x*f2(x-1);
}
