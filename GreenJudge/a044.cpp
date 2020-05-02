#include <iostream>
using namespace std;
int main()
{
	int n,i,x=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0) x=x+i;
	}
	x=x-n;
	if(x>n) cout<<"Abundant";
	else if(x<n) cout<<"Deficient";
	else cout<<"Perfect";
	return 0;
}
