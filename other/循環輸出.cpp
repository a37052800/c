#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s,a="";
	int n=0,i=0,j;
	cin>>s;
	cout<<"ªø«×:"<<s.size()<<endl; 
	while(i<s.size())
	{
		a.clear();
		n=int(s[i])-48;
		i++;
		while(!(s[i]<='9')&&(s[i]>='0'))
		{
			a=a+s[i];
			i++;
		}
		for(j=0;j<n;j++)
		{
			cout<<a;
		}
		cout<<" ";
	}
	return 0;
}
