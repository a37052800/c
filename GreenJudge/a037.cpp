#include <iostream>
using namespace std;
int main()
{
	int a[11],b[11],n,i;
	cin>>n;
	for(i=1;i<=n;i++) cin>>a[i]>>b[i];
	for(i=1;i<=n;i++)
	{
		if (a[i]>b[i]) cout<<"A"<<" "<<a[i]-b[i];
		else if (b[i]>a[i]) cout<<"B"<<" "<<b[i]-a[i];
		else cout<<0;
		cout<<endl;
	}
	return 0;
}
