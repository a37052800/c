#include <iostream>
using namespace std;
int main()
{	long a[100],max=-999,i;
	for (i=1;i<=7;i++) cin>>a[i];
	for (i=1;i<=7;i++) if(a[i]>max) max=a[i];
	cout<<max;
	return 0;
}
