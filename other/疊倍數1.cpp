#include <iostream>
using namespace std;
int main()
{
	int n,i,t,x;
	cin>>n;
	int k[n],d[n];
	for(i=0;i<n;i++) cin>>k[i]>>d[i];
	for(i=0;i<n;i++)
	{
		x=0;
		t=0;
		while(x<500)
		{
			while(k[i]>t)
			{
				t=10*t+d[i];
				x++;
			}
			t=t%k[i];
			if(t==0)
			{
				cout<<x;
				break;
			}
		}
		if(x>=500) cout<<0;
		cout<<endl;
	}
	return 0;
}

