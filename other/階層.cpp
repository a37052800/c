#include <iostream>
using namespace std;
long f1(int x);
long f2(int x);
int main()
{
	int n;
	cin>>n;
	cout<<f1(n)<<endl; //迴圈版 
	cout<<f2(n)<<endl; //遞迴版 
	return 0;
}
//迴圈版 
long f1(int x)
{
	long y=1,i;
	for(i=1;i<=x;i++) y=y*i;
	return y;
}
//遞迴版 
long f2(int x)
{
	if(x==1) return 1;
	else return x*f2(x-1);
}
