#include <iostream>
#include <algorithm>
#define f(a,b) for(a=0;a<b;a++)
using namespace  std;
int main()
{
	int n,k,i,j,t,x;
	long d=1;
	cin>>n>>k;
	x=k;
	int p[n];
	f(i,n) cin>>p[i];
	sort(p,p+n);
	f(i,n-1)
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
