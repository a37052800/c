#include <iostream>
using namespace std;
int main()
{
	long a,aa,i=0;
	cin>>a;
	aa=a;
	while(aa!=0)
	{
		if(aa%10!=0)
		{
			while(aa!=0)
			{
				cout<<aa%10;
				aa=aa/10;
				i=i+1;
			}
		}
		else aa=aa/10;
	 } 
	cout<<"ªø«×="<<i; 
	return 0;
}
