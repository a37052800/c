#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char a[20];
	cin>>a;
	for (int i=0;i<=strlen(a)-1;i++)
	{
		if (a[i]<'C')
		{
			a[i]+=24;
			cout<<a[i];
		}
		else
		{
			a[i]-=2;
			cout<<a[i];
		}
	}
	return 0;
}
