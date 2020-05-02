#include <iostream>
using namespace std;
int main()
{
long y;
cin>>y;
if (y%100==0)
	{
	if (y%400==0)
		cout<<"¶|";
	else
		cout<<"«D¶|";
	}
else
	{
	if (y%4==0)	
		cout<<"¶|";
	else
		cout<<"«D¶|";
	}
	return 0;
}
