#include <iostream>
using namespace std;
int main()
{
	long a[21][21],m,n,i,j,max,sum=0;
	cin>>m>>n;
	for(i=1;i<=m;i++) for(j=1;j<=n;j++) cin>>a[i][j];
	cout<<"============================================="<<endl;
	for(i=1;i<=m;i++) 
	{
		for(j=1;j<=n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=1;i<=m;i++) 
	{
		max=-999;
		for(j=1;j<=n;j++)
		{
			if(a[i][j]>max) max=(a[i][j]);
		}
		a[i][n+1]=max;
	}	
	cout<<"============================================="<<endl;
	for(i=1;i<=n+1;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=1;i<=m;i++) sum=sum+a[i][n+1];
	cout<<sum<<endl;
	for(i=1;i<=m;i++) if(sum%a[i][n+1]==0) cout<<a[i][n+1]<<" ";	
	return 0;
}
