#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a,b;
	int i,x=0,n,k;
	cin>>a>>b;
	for(i=0;i<=a.size()-1;i++)
	{
		n=b.find(a[i]);
		if(n+1<k) break;
		if(n>=0)
		{
			if(b[n]) b.erase(n,1);
			x++;
		}
		k=n;
	}
	if(x>=a.size()) cout<<"YES";
	else cout<<"NO";
	return 0;
}
