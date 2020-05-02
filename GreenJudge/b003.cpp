#include <iostream>
using namespace std;
int main()
{
	int n,x[99],m,i,b=0,s=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>x[i];
	}
	cin>>m;
	for(i=1;i<=n;i++)
	{
		if (x[i]>m)
			b++;
		if (x[i]<m)
			s++;
	}
	cout<<b<<" "<<s;
	return 0;
}
