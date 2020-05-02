#include <iostream>
using namespace std;
int main()
{
	int N,S=0;
	cin>>N;
	while(N!=0)
	{
		S=S+(N%10);
		N=N/10;
	}
	cout<<S;
	return 0;
}
