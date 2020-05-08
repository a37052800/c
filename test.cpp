#include <iostream>
using namespace std;
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
int main()
{
	string i;
	cin>>i;
	cout<<LomaToInt(i)<<endl;
	main();
	//
}

