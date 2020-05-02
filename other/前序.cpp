#include <iostream>
#include <string>
using namespace std;

int main()
{
	int k=0;
	string ts,s[1000];
	char tc;
	getline(cin,ts);
	while(ts.size()!=0)
	{
		while((ts[0]>='0')&&(ts[0]<='9'))
		{
			cout<<ts[0];
			ts.erase(0,1);
		}
		tc=ts[0];
		ts.erase(0,1);
		switch (tc)
		{
			case '(':
				s[k]=tc;
				k++;
				break;
			case ')':
				while (s[k-1]!="(")
				{
					cout<<s[k-1];
					k--;
				}
				k--;
				s[k]="";
				break;
			case '*':
				if((s[k-1]=="*")||(s[k-1]=="/"))
				{
					cout<<s[k-1];
					k--;
				}
				s[k]=tc;
				k++;
				break;
			case '/':
				if((s[k-1]=="*")||(s[k-1]=="/"))
				{
					cout<<s[k-1];
					k--;
				}
				s[k]=tc;
				k++;
				break;
			case '+':
				if((s[k-1]=="*")||(s[k-1]=="/")||(s[k-1]=="+")||(s[k-1]=="-"))
				{
					cout<<s[k-1];
					k--;
				}
				s[k]=tc;
				k++;
				break;
			case '-':
				if((s[k-1]=="*")||(s[k-1]=="/")||(s[k-1]=="+")||(s[k-1]=="-"))
				{
					cout<<s[k-1];
					k--;
				}
				s[k]=tc;
				k++;
				break;
		}
	}
	for(int i=k-1;i>=0;i--) cout<<s[i];
}
