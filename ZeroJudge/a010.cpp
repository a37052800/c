#include<iostream>
using namespace std;
int main()
{
	int ct;
	while(cin>>ct)
	{
		int x[20][2]= {},tx=0,t=ct;
		for(int i=2; i<=t; i++)
		{
			if(t%i==0)
			{
				
				t/=i;
				for(int j=0; j<=tx; j++)
				{
					if(x[j][0]==i)
					{
						x[j][1]++;
						i=1;
						goto END;
					}
				}
				x[tx][0]=i;
				x[tx][1]=1;
				tx++;
				i=1;
			}
END:
			continue;
		}
		int i=0;
		while(x[i][0]!=0)
		{
			/*if(x[i][0]==ct)
			{
				cout<<1<<" * "<<ct;
				return 0;
			}*/
			cout<<x[i][0];
			if(x[i][1]!=1)
				cout<<"^"<<x[i][1];
			i++;
			if(x[i][0]!=0) cout<<" * ";
		}
		cout<<endl;
	}
}

