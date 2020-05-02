#include <iostream>
using namespace std;
int main()
{	int a[11],max=-999,i,n,ni;
	cin>>n;
	for (i=1;i<=n;i++) cin>>a[i];
	for (i=1;i<=n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			ni=i;
		}
	}
	cout<<ni<<" "<<max;
	return 0;
}
