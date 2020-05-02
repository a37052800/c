#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n,i,j,k=0;
	cin>>n;
	string s[n],t;
	for(i=0;i<=n-1;i++) cin>>s[i];
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<=i-1;j++)
		{
			while(k<s[j].size()||k<s[j+1].size())
			{
				if(s[j][k]>s[j+1][k])
				{
					t=s[j];
					s[j]=s[j+1];
					s[j+1]=t;
					k++;
					break;
				}
				else if(s[j][k]<s[j+1][k]) break;
				else k++;
			}
			k=0;
		}
	}
	for(i=0;i<=n-1;i++) cout<<s[i]<<endl;
	return 0;
}

