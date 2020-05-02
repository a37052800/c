#include <iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==i||(j-i)%3==0) cout<<"@";
			else cout<<"-";
		}
		cout<<endl;
	}
	return 0;
}
