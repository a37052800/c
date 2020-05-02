#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	int i,b[100]={0},n=0;
	cin>>a;
	for (i=0;i<=a.size()-1;i++)
	{
		switch (a[i])
		{
			case 'I':
				b[i]=1;
				break;
			case 'V':
				b[i]=5;
				break;
			case 'X':
				b[i]=10;
				break;
			case 'L':
				b[i]=50;
				break;
			case 'C':
				b[i]=100;
				break;
			case 'D':
				b[i]=500;
				break;
			case 'M':
				b[i]=1000;
				break;
		}
	}
	for (i=0;i<=99;i++)
	{
		if(b[i]==0) break;
		if(b[i+1]<=b[i])
			n=n+b[i];
		else
		{
			n=n+b[i+1]-b[i];
			i++;
		}
	}
	cout<<n;
	return 0;
}

