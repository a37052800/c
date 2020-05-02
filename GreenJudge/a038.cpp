#include <iostream>
using namespace std;
int main()
{
	int a[11]={0},b[11],n=1,i;
	while (1)
	{
		cin>>a[n]>>b[n];
		if(cin.fail()) break;
		n++;
	}
	for(i=1;i<=n-1;i++)
	{
		if (a[i]>b[i]) cout<<"A"<<" "<<a[i]-b[i];
		else if (b[i]>a[i]) cout<<"B"<<" "<<b[i]-a[i];
		else cout<<0;
		cout<<endl;
	}
	return 0;
}
