#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i,n,x=0;
	string a;
	cin>>a;
	n=a.size();
	for(i=0;i<=(n-1)/2;i++)
	{
		if (a[i]==a[n-i-1]) x++;
	}
	if (x==(n-1)/2+1) cout<<"YES"; else cout<<"NO";
	return 0;
}	
