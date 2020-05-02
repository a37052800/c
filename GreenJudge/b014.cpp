#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int f(string x);
int main()
{
	string a,b,c;
	int i,n[3],k=0,g;
	getline(cin,a);
	getline(cin,b);
	getline(cin,c);
	n[1]=f(a);
	n[2]=f(b);
	n[3]=f(c);
	for(i=1;i<=3;i++)
	{
		if(n[i]>k)
		{
			k=n[i];
			g=i;
		}
	}
	cout<<g<<" "<<k;
	return 0;
}
int f(string x)
{
	stringstream ss(x);
	int s=0,t;
	while(!ss.fail())
	{
		ss>>t;
		s+=t;
		t=0;
	}
	return s;
}

