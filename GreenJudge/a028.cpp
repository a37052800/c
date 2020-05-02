#include <iostream>
using namespace std;
int main()
{
	int n,k,i;
	cin>>n>>k;
	i=n-1;
	k=n-k;
	for (i;i>k;i--) n=n*i;
	cout<<n;
	return 0;
}
