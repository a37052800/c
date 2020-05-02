#include <iostream>
using namespace std;
int main()
{
	int n,i,x=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		x=x*13%100;
	}
	cout<<x/10;
	return 0;
}
