#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	long n,j,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<j<<"x"<<i<<"="<<setw(2)<<j*i<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
