#include <iostream>
using namespace std;
int main()
{
	long n,j,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i+j>=n+1)
				cout<<"1 ";
			else
				cout<<"0 ";
	
		}
		cout<<endl;
	}
	return 0;
}
