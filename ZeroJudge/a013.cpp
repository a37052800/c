#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int LomaToInt(string a);
void IntToLoma(int a);
int main()
{
	string s[2];
	cin>>s[0];
	if(s[0]=="#") return 0;
	cin>>s[1];
	IntToLoma(abs(LomaToInt(s[0])-LomaToInt(s[1])));
	cout<<endl;
	main();
}
int LomaToInt(string a)
{
	int ia[a.size()]={},ans=0;
	for(int i=0;i<a.size();i++)
	{
		switch(a[i])
		{
			case 'I':
				ia[i]=1;
				break;
			case 'V':
				ia[i]=5;
				break;
			case 'X':
				ia[i]=10;
				break;
			case 'L':
				ia[i]=50;
				break;
			case 'C':
				ia[i]=100;
				break;
			case 'D':
				ia[i]=500;
				break;
			case 'M':
				ia[i]=1000;
				break;
		}
	}
	for(int i=0;i<a.size();i++)
	{
		if(i==a.size()-1)
		{
			ans+=ia[i];
			continue;
		}
		if(ia[i+1]>ia[i])
		{
			ans+=ia[i+1]-ia[i];
			i++;
		}
		else ans+=ia[i];
	}
	return ans;
}
void IntToLoma(int a)
{
	if(a==0) cout<<"ZERO";
	for(int i=0;i<a/1000;i++)
	{
		cout<<"M";
	}
	a%=1000;
	for(int i=0;i<a/900;i++)
	{
		cout<<"CM";
	}
	a%=900;
	for(int i=0;i<a/500;i++)
	{
		cout<<"D";
	}
	a%=500;
	for(int i=0;i<a/400;i++)
	{
		cout<<"CD";
	}
	a%=400;
	for(int i=0;i<a/100;i++)
	{
		cout<<"C";
	}
	a%=100;
	for(int i=0;i<a/90;i++)
	{
		cout<<"XC";
	}
	a%=90;
	for(int i=0;i<a/50;i++)
	{
		cout<<"L";
	}
	a%=50;
	for(int i=0;i<a/40;i++)
	{
		cout<<"XL";
	}
	a%=40;
	for(int i=0;i<a/10;i++)
	{
		cout<<"X";
	}
	a%=10;
	for(int i=0;i<a/9;i++)
	{
		cout<<"IX";
	}
	a%=9;
	for(int i=0;i<a/5;i++)
	{
		cout<<"V";
	}
	a%=5;
	for(int i=0;i<a/4;i++)
	{
		cout<<"IV";
	}
	a%=4;
	for(int i=0;i<a/1;i++)
	{
		cout<<"I";
	}
	a%=1;
}
