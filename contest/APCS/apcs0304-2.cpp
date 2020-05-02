#include <iostream>
using namespace std;
int main()
{
	int n,i,m=1,j;
	cin>>n;
	int x[n],s[n];
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		s[i]=0;
	}
	for(i=0;i<n;i++)
	{
		s[i]=m;
		i=x[i];
		if(s[i]==m)
		{
			for(j=1;j<n;j++)
			{
				if(s[j]==0)
				{
					i=j-1;
					j=n;
				}
			}
			m++;
		}
		
	}
	cout<<m;
	return 0;
}
