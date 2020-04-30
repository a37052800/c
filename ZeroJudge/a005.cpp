#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int l[t][4];
	for(int i=0;i<t;i++)
		for(int j=0;j<4;j++)
			cin>>l[i][j];
	for(int i=0;i<t;i++)
	{
		if((l[i][1]-l[i][0]==l[i][2]-l[i][1]))
		{
			int d=l[i][1]-l[i][0];
			for(int j=0;j<5;j++)
			{
				cout<<l[i][0]+j*d<<" ";
			}
		}
		else
		{
			int r=l[i][1]/l[i][0];
			cout<<l[i][0]<<" ";
			for(int j=0;j<4;j++)
			{
				cout<<l[i][j]*r<<" ";
			}
		}
		cout<<endl;
	}
}

