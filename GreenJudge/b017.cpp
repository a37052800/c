#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string a,b;
	int i=0,j,u=0,x=0;
	cin>>a>>b;
	int sa=a.size(),sb=b.size();	
	int na[sa],nb[sb],n[102]={0};
	string c;
	stringstream s;
	while(a[i]!='\0')
	{
		c=a[i];
		s.clear();
		s.str(c);
		s>>na[i];
		i++;
	}
	i=0;
	while(b[i]!='\0')
	{
		c=b[i];
		s.clear();
		s.str(c);
		s>>nb[i];
		i++;
	}
	for(i=0;i<=sa-1;i++)
	{
		for(j=0;j<=sb-1;j++)
		{
			n[101-i-j]=na[sa-1-i]*nb[sb-1-j]+n[101-i-j];
			while(n[101-i-j]>=10)
			{
				n[101-1-i-j]++;
				n[101-i-j]-=10;
			}		
		}
	}
	for(i=0;i<=101;i++)
	{
		if(n[i]>0) x=1;
		if(x==1) cout<<n[i];
	}
	return 0;
}
