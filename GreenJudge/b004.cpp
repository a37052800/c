#include <iostream>
using namespace std;
int main()
{
    int n,m[99],i,j,o[99]={0},e;
    cin>>n;
    cin>>e;
    for (i=1;i<=e;i++) cin>>m[i];
    for (i=1;i<=e;i++)
    {
    	for(j=1;j<=n;j++)
    	{
    		if (m[i]==j) o[j]=1;
		}
	}
	for (i=1;i<=n;i++)
	{
		if (o[i]!=1) cout<<i<<" ";
	}
	return 0;
}
