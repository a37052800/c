#include <iostream>
using namespace std;
int main()
{
	int a,b,s=0;
	cin>>a>>b;
	if(a<b)
	{
		for(int i=a;i<=b;i++)
		{
			s=s+i;
			cout<<i;
			if(i<b) cout<<"+";
			else if(i==b) cout<<"=";
		}
	}
	else if(a>b)
	{
		for(int i=a;i>=b;i--)
		{
			s=s+i;
			cout<<i;
			if(i>b) cout<<"+";
			else if(i=b) cout<<"=";
		}
	}
	else 
	{
		s=a;
		cout<<a<<"=";
	}
	cout<<s;
	return 0;
}
