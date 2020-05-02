#include <iostream>
#include <string> 
using namespace std;
int main()
{
	string s;
	s+='A';
	s[1]='B';
	cout<<s<<endl;
	s.clear();
	cout<<s;
	while(1)
	{
		cin.sync();
		s+=cin.get();
		cout<<s;
	}
}

