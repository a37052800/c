#include <iostream>
#include <string>
using namespace std;
int e(string x);
int main()
{
	string a,b,c;
	cin>>a>>b>>c;
	cout<<e(a)+e(b)+e(c);
	return 0;
}
int e(string x)
{
	int i;
	int y=0;
	for(i=0;i<=x.size()-1;i++)
		if (x[i]>='0'&&x[i]<='9')
			y=y*10+x[i]-48;
	return y;
}
