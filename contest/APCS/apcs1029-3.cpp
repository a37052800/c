#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n,m,k,i,j,x=1,f=0,q=1;
	cin>>n>>m>>k;
	int p[n+1];
	memset(p,0,sizeof(p));
	for(i=1;i<=n;i++)
	{
		if(p[i]!=0) f++;
		if((p[i]==0)&&(x==m))
		{
			p[i]=q;
			q++;
			x=(x%m)+1;
		}
		if(p[i]==0)
			x=(x%m)+1;
		if((i==n)&&(f<k+1))
		{
			i=0;
			f=0;
		}
	}
	for(i=1;i<=n;i++)
		if(p[i]==k+1) cout<<i;
	return 0;
}
