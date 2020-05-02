#include <iostream>
using namespace std;
long f1(int x);
int main()
{
	int n;
	cin>>n;
	cout<<f1(n); //°j°éª© 
	return 0;
}
//°j°éª© 
long f1(int x)
{
	long y=1,i;
	for(i=1;i<=x;i++) y=y*i;
	return y;
}
