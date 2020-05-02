#include <string> 
#include <iostream>
using namespace std;
int main()
{
	string s;
	int t=0,i=0,a=0;
	cin>>s;
	while(i<s.size())
	{
		if(s[i]=='F')
		{
			t++;
		}
		if(s[i]=='f')
		{
			if(t>a) a=t;
			t=0;
		}
		i++;
	}
	if(t>a) a=t;
	cout<<a;
	return 0;
}

