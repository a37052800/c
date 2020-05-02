#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	char c;
	string s;
	stringstream ss;
	int i=0,j;
	cin>>c>>s;
	cout<<c+0<<s[1]<<'\a'<<endl;
	ss.clear();
	ss.str(s);
	ss>>i>>c>>j;
	cout<<i<<c<<j;
    return 0;
}

