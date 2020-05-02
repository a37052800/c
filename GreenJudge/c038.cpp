#include <iostream>
using namespace std;
int main()
{
	int m,d,l;
	cin>>m>>d>>l;
	if(d+l>31)
	{
		m+=(d+l)/31;
		d=(d+l)%31;
		l=0;
	}
	if((m<=8)&&(d+l<=30)) cout<<"YES";
	else cout<<"NO";
	return 0;
}

