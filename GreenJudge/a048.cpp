#include <iostream>
using namespace std;
int main()
{
	short n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++) cout<<"_";
		for(k=1;k<=1+(i-1)*2;k++) cout<<i;
		cout<<endl;
	}
	return 0;
}
