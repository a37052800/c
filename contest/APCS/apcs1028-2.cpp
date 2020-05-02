#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	string s;
	int n,i,j,x=0,l=0,c=0;
	cin>>n>>s;
	int t[s.size()];
	memset(t,0,sizeof(t));
	for(i=0;i<s.size();i++)
	{
		if((s[i]>='a')&&(s[i]<='z')) t[i]=1;
		else t[i]=2;
	}
	c=t[0];
	for(i=0;i<s.size();i++)
	{
		if(t[i]==c) x++;
		else
		{
			
			c=t[i];
			x>=n ? i=i-n : i--;
			x=0;
		}
		
		if((x>=n)&&(x%n==0))
		{
			l<x ? l=x : l;
			c=3-c;
		}
	}
	cout<<l<<endl;
	return 0;
}
