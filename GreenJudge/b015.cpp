#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int f(string x);
int main()
{
	string a,b,c;
	getline(cin,a);
	getline(cin,b);
	getline(cin,c);
	if(f(a)>0) cout<<"1"<<" "<<f(a);
	else if(f(b)>0) cout<<"2"<<" "<<f(b);
	else if(f(c)>0) cout<<"3"<<" "<<f(c);
	else cout<<"NO";
	return 0;
}
int f(string x)
{
	stringstream ss(x);
	string s;
	int t=0,i=0;
	while(!ss.fail())
	{
		t++;
		ss>>s;
		if(s=="BILL")
		{
			i=t;
			break;
		}
	}
	return i;
}

