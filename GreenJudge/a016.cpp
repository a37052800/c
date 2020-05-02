#include <iostream>
using namespace std;
int main()
{
long y;
cin>>y;
if (y%100==0)
	{
	if (y%400==0)
		cout<<"YES";
	else
		cout<<"NO";
	}
else
	{
	if (y%4==0)	
		cout<<"YES";
	else
		cout<<"NO";
	}
	return 0;
}
