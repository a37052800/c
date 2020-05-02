#include <iostream>
using namespace std;
int main()
{
	int n,m=0,u;
	cin>>n>>u;
	while(n<u)
	{
		n=n*3;
		m++;
	}
	cout<<m;
	return 0;
}
