#include <iostream>
using namespace std;
int main()
{
	int n,i,t=0,s=0;
	cin>>n;
	int c[n];
	for(i=0;i<n;i++)
	{
		cin>>c[i];
	}
	for(i=0;i<n;i++)
	{
		t+=c[i];
	}
	t=t/n;
	for(i=0;i<n;i++)
	{
		if(c[i]<t)
		{
			s+=t-c[i];
		}
	}
	cout<<s;
	return 0;
}

