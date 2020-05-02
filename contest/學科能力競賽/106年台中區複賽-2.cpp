#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string tx[999999],ty[999999];
double t=0;
int i=0;
int main()
{
	string a,m;
	double p;
	int n,j,x=0;
	stringstream ss;
	getline(cin,a);
	ss.clear();
	ss.str(a);
	ss>>m>>p>>n;
	if(m[0]=='X')
	{
		for(j=0;j<=i;j++)
		{
			if(tx[j]==m)
			{
				x=1;
				tx[j]="";
			}
		}
		if(x==1)
		{
			if((n-1)%2!=0)
			{
				t+=((n-1)/2+1)*p;
				tx[i]=m;
				
			}
			else
			{
				t+=(n-1)/2*p;
				
			}
		}
		else
		{
			if(n%2!=0)
			{
				t+=(n/2+1)*p;
				tx[i]=m;
			}
			else
			{
				t+=n/2*p;
			}
		}
		i++;
		main();
	}
	else if(m[0]=='Y')
	{
		for(j=0;j<=i;j++)
		{
			if(ty[j]==m)
			{
				x=1;
				ty[j]="";
			}
		}
		if(x==1)
		{
			if(n%2!=0)
			{
				t+=p/2;
				t+=(n/2)*(p/2);
				ty[i]=m;
				
			}
			else
			{
				t+=(n/2)*(p/2);
			}
		}
		else
		{
			if(n%2!=0)
			{
				t+=(n/2+1)*p;
				t+=(n/2)*(p/2);
				ty[i]=m;
			}
			else
			{
				t+=n/2*(p+(p/2));
			}
		}
		i++;
		main();
	}
	else if(m=="0000000000")
	{
		cout<<t;
	}
	else
	{
		t+=p*n;
		main();
	}
	
	return 0;
}

