#include <iostream>
using namespace std;
int main()
{
	int i;
	string a;
	cin>>a;
	for(i=0;i<a.size();i++)
	{
		if((a[i]>='a')&&(a[i]<='z'))
		{
			a[i]=a[i]+12;
			if(a[i]>'z') a[i]='a'+a[i]-'z'+1;
		}
		if((a[i]>='A')&&(a[i]<='Z'))
		{
			a[i]=a[i]+12;
			if(a[i]>'Z') a[i]='A'+a[i]-'Z'+1;
		}
		
	}
	cout<<a;
	return 0;
}
