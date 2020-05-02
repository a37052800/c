#include <iostream>
using namespace std;
int main()
{
	long aa,a,n=1;
	cin>>a;
	aa=a;
	while(aa!=1)
	{
		if(aa%2==1)
		{
			aa=aa*3+1;
			n=n+1;
		}
		else
		{
			aa=aa/2;
			n=n+1;
		}
	}
	cout<<n;
	return 0;
}
