#include <iostream>
using namespace std;
int main()
{
	long n,j,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"0 ";
		}
		cout<<endl;
	}
	return 0;
}
