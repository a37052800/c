#include <iostream>
using namespace std;
int main()
{
long y;
cin>>y;
if ((y%10)!=0)
	{
		if ((y%5)!=0)
			cout<<"¤@¯ë";
		else
			cout<<"¤p¦¯";
	}
else
	{
		if ((y%20)!=0)
			cout<<"¥ð¾i";
		else
			cout<<"¤j¦¯";
	}
	return 0;
}
