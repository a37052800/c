#include <iostream>
using namespace std;
int main()
{
	int a,b,t=0;
	cin>>a>>b;
	if (a==b) t=50;
	if (a%2==1) t=100;
	if (b==2||b==5||b==8) t=200;
	cout<<t;
	return 0;
}
