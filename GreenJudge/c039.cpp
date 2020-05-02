#include <iostream>
using namespace std;
int main()
{
	int a,b,i,j=30,pa=0,pb=0;
	cin>>a>>b;
	for(i=0;i<=90;i=i+j)
	{
		if(a>=i) pa++;
		if(i==30) j=20;
	}
	cout<<pa<<" ";
	j=50;
	for(i=0;i<=350;i=i+j)
	{
		if(b>=i) pb++;
		if(i==50) j=100;
	}
	cout<<pb;
	return 0;
}

