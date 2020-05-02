#include <iostream>
using namespace std;
int main()
{
	int n,s[100],t,i,j;
	cin>>n;
	for(i=0;i<=n-1;i++) cin>>s[i];
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<=i-1;j++)
		{
			if(s[j]<s[j+1])
			{
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
		}
	}
	for(i=0;i<=n-1;i++) cout<<s[i]<<" ";
	return 0;
}

