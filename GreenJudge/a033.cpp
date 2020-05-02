#include <iostream>
using namespace std;
int main()
{
	int n,x=0;
	cin>>n;
	cout<<"|"<<"____";
	     if(n/10000000!=0) x++;
	else if(n/1000000!=0) x++;
	else if(n/100000!=0) x++;
	else if(n/10000!=0) x++;
	else if(n/1000!=0) cout<<n;
	else 
	{
		cout<<"_";
		if(n/100!=0) cout<<n;
		else
		{
			cout<<"_";
			if(n/10!=0) cout<<n;
			else
			{
				cout<<"_";
				if(n!=0) cout<<n;
				else cout<<"0";
			}
		}		
	}
	if(x>0)
	{
		if(n%10000/1000!=0) cout<<n%10000;
		else 
		{
			cout<<"0";
			if(n%1000/100!=0) cout<<n%1000;
			else
			{
				cout<<"0";
				if(n%1000/10!=0) cout<<n%100;
				else
				{
					cout<<"0";
					if(n%1000!=0) cout<<n%10;
					else cout<<"0";
				}
			}		
		}
	}
	cout<<"|";
	return 0;
}
