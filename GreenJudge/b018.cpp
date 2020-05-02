#include <iostream>
using namespace std;
int main()
{
	int n,a[9999]={0},i,j,m=0,c=0,x=0;
	cin>>n;
	a[0]=1;
	for(i=2;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			a[j]=a[j]*i+c;
			if((c=a[j]/10)!=0 && j==m) m++;
			a[j]=a[j]%10;
		}	
	}
	for(i=m;i>=0;i--)
	{
		cout<<a[i];
	}
	return 0;
}
