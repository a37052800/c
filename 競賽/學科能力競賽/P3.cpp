#include <iostream>
using namespace std;
class inv
{
	public:
		int t;
		int y;
};
int main()
{
	int n,r,t;
	cin>>n>>r>>t;
	double abc[n];
	inv m[n];
	for(int i=0;i<n;i++)
	{
		cin>>m[i].t>>m[i].y;
	}
	for(int i=0;i<n;i++)
	{
		double mm=m[i].y,ss=1;
		
		for(int j=i-1;j>=0;j--)
		{
			ss*=m[i].t-m[j].t;
			//cout<<ss<<endl<<"i="<<i<<"j="<<j<<endl;
		}
		for(int j=i-1;j>=0;j--)
		{
			
			int ttt=1;
			mm-=abc[j]*ttt;
			for(int k=0;k<j;k++)
			{
				ttt*=m[k].t-m[j].t;
			}
			//cout<<mm<<endl<<"i="<<i<<"j="<<j<<endl;
		}
		abc[i]=mm/ss;
	}
	int ans=abc[0];
	for(int i=1;i<n;i++)
	{
		int tt=1;
		for(int j=i-1;j>=0;j--)
		{
			tt*=tt-m[j].t;
		}
		ans+=tt*abc[i];
	}
	cout<<ans;
	/*for(int i=0;i<n;i++)
	{
		cout<<abc[i]<<" ";
	}*/
	return 0;
}
/*
2 101 5
1 12
9 28
*/
/*
3 109 5
1 7
3 25
9 18
*/
