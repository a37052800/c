#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int m,i,x=1,n=1,f=0;
	cin>>m;
	long p[m+1];
	memset(p,0,sizeof(p));
	for(i=1;i<=m;i++)
	{
		if(p[i]!=0) f++;
		if((p[i]==0)&&(x==3))
		{
			p[i]=n;
			n++;
			x=(x%3)+1;
		}
		if(p[i]==0)
		{
			x=(x%3)+1;
		}
		if((i==m)&&(f<m))
		{
			i=0;
			f=0;
		}
	}
	for(i=1;i<=m;i++) cout<<p[i]<<" ";
	return 0;
}
