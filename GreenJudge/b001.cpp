#include <iostream>
using namespace std;
int main()
{
	int a[99],i,n,tmp;
	cin>>n;
	for(i=1;i<=n;i++) cin>>a[i];
	for(i=1;i<=n/2;i++)
	{
		tmp=a[i];
		a[i]=a[n+1-i];
		a[n+1-i]=tmp;
	}
	for(i=1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}
