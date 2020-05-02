#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string a,b;
	int i=0,u=0,x=0;
	cin>>a>>b;
	int sa=a.size(),sb=b.size();	
	int na[sa],nb[sb],n[100]={0};
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
	
	if(sa>=sb)
	{
		for(i=0;i<=sa-1;i++)
		{
			if(sb-1-i<0)
			{
				if(na[sa-1-i]+u>=10)
				{
					n[99-i]=(na[sa-1-i]+u)%10;
					u=(na[sa-1-i]+u)/10;
				}
				else 
				{
					n[99-i]=na[sa-1-i]+u;
					u=0;
				}
			}
			else if((na[sa-1-i]+nb[sb-1-i]+u)>=10)
			{
				n[99-i]=(na[sa-1-i]+nb[sb-1-i]+u)%10;
				u=(na[sa-1-i]+nb[sb-1-i]+u)/10;
			}
			else
			{
				n[99-i]=na[sa-1-i]+nb[sb-1-i]+u;
				u=0;
			}		
		}
		if(u!=0) n[99-i]=u;
	}
	else
	{
		for(i=0;i<=sb-1;i++)
		{
			if(sa-1-i<0)
			{
				if(nb[sb-1-i]+u>=10)
				{
					n[99-i]=(nb[sb-1-i]+u)%10;
					u=(nb[sb-1-i]+u)/10;
				}
				else 
				{
					n[99-i]=nb[sb-1-i]+u;
					u=0;
				}
			}
			else if((na[sa-1-i]+nb[sb-1-i]+u)>=10)
			{
				n[99-i]=(na[sa-1-i]+nb[sb-1-i]+u)%10;
				u=(na[sa-1-i]+nb[sb-1-i]+u)/10;
			}
			else
			{
				n[99-i]=na[sa-1-i]+nb[sb-1-i]+u;
				u=0;
			}		
		}
		if(u!=0) n[99-i]=u;
	}
	for(i=0;i<=99;i++)
	{
		if(n[i]>0) x=1;
		if(x==1) cout<<n[i];
	}
	return 0;
}
