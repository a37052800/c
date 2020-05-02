#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,i,j,h;
	long double t=0;
	cin>>n;
	int k[n],d[n];
	for(i=0;i<n;i++) cin>>k[i]>>d[i];
	for(i=0;i<n;i++)
	{
		j=1;
		while(j<=23)
		{
			t=d[i];
			for(h=1;h<=j;h++)
			{
				t+=d[i]*pow(10,h);
				//cout<<t<<endl;
			}
			if(fmod(t,k[i])==0)
			{
				cout<<j+1;
				break;
			}
			j++;
		}
		if(j>=23) cout<<0;
		cout<<endl;
	}
	
	return 0;
}

