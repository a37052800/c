#include <iostream>
using namespace std;
int main()
{
	int n,i,j,k,q;
	cin>>n;
	int g[n+1][6],s[n+1],t;
	for(i=0;i<=n;i++) s[i]=0;
	for(i=1;i<=n;i++)
		for(j=0;j<=5;j++)
			cin>>g[i][j];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=5;j++)
		{
			s[i]+=g[i][j];
		}
	}
	//for(q=1;q<=n;q++) cout<<s[q]<<" "; 
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i-1;j++)
		{
			if(s[j]>s[j+1])
			{
				for(k=0;k<=5;k++)
				{
					t=g[j][k];
					g[j][k]=g[j+1][k];
					g[j+1][k]=t;
				} 
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
				//for(q=0;q<=6;q++) cout<<g[j][q]<<" ";
			}
			else if(s[j]==s[j+1])
			{
				if(g[j][3]>g[j+1][3])
				{
					for(k=0;k<=5;k++)
					{
						t=g[j][k];
						g[j][k]=g[j+1][k];
						g[j+1][k]=t;
					} 
					t=s[j];
					s[j]=s[j+1];
					s[j+1]=t;
					//for(q=0;q<=6;q++) cout<<g[j][q]<<" ";
				}			
			}
		}
	}		
	for(i=n;i>=1;i--) cout<<g[i][0]<<endl;	
	return 0;
}


