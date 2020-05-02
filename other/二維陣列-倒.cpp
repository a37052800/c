#include <iostream>
using namespace std;
long a[100][100];
int i,j,m,n;
void p()
{
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)	cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
void g()
{
	cout<<"=========================================="<<endl;
}
int main()
{
	long t;
	cin>>m>>n;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)	cin>>a[i][j];
	}
	g();
	p();
	g();
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=m/2;i++)
		{
			t=a[i][j];
			a[i][j]=a[m+1-i][j];
			a[m+1-i][j]=t;
		}
	}
	p();
	g();
	return 0;
}

