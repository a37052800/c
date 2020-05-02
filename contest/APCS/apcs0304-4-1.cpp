#include <iostream>
using namespace  std;
int main()
{
	int n,k,i,j,t,x;
	long d=1;
	cin>>n>>k;
	x=k;
	int p[n];
	for(i=0;i<n;i++) cin>>p[i];
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i]>p[j])
			{
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		x--;
		if(x<0)
		{
			x=k;
			d++;
			i=-1;
		}
		else if((p[i+1]-p[i])<d)
		{
			for(j=i+1;j<n;j++)
			{
				if((p[j]-p[i])>=d)
				{
					i=j-1;
					j=n;
				}
			}
		}
	}
	cout<<d;
	return 0;
}
