#include <iostream>
using namespace std;
int main()
{
	int n,x=0;
	cin>>n;
	while (n>=5)
	{
		x=x+5;
		n=n-5+1;
		if(n==1) x++;
	}
	if(x==0) x=n;
	cout<<x;
	return 0;
}
