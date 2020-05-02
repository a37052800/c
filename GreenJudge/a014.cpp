#include <iostream>
using namespace std;
int main()
{
	int a[4],i,t=999;
	for (i=1;i<=3;i++) cin>>a[i];
	for (i=1;i<=3;i++) if(a[i]<t) t=a[i];
	cout<<t;
	return 0;
}
