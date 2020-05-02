#include <iostream>
using namespace std;
int main()
{
	int n,m[21],i,t=0,j,o[21]={0};
	cin>>n;
	for(i=1;i<=n;i++) cin>>m[i];
	for(i=1;i<=n;i++)
	{
		t=m[i];
		for(j=1;j<=n;j++)
		if (t==m[j+i-1]) o[i]=o[i]+1;
	}
	t=0;
	for(i=1;i<=n;i++)
	{
		if (o[i]>t) t=o[i];
	}
	for(i=1;i<=n;i++)
	{
		if(o[i]==t) cout<<m[i]<<" "<<t;
	}
	return 0;
}
