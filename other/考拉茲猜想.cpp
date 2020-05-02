#include <iostream>
using namespace std;
int main()
{
	long aa,a;
	cin>>a;
	aa=a;
	while(aa!=1)
	{
		if(aa%2==1)
		{
			aa=aa*3+1;
			cout<<aa<<" ";
		}
		else
		{
			aa=aa/2;
			cout<<aa<<" ";
		}
	}
	return 0;
}
