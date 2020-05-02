#include <iostream>
using namespace std;
int main()
{
	int h,m;
	cin>>h>>m;
	if(m>60)
	{
		h=h+(m/60);
		m=m%60;
	}
	if(h<=16&&h>=14)
	{
		if(h==14&&m>=20) cout<<"YES";
		else if(h==16&&m<=40) cout<<"YES";
		else if(h==15) cout<<"YES";
		else cout<<"NO";
	}
	else cout<<"NO";
	return 0;
}
