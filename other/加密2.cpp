#include <iostream>
using namespace std;
int main()
{
	int i,j,k=0;
	string a;
	getline(cin,a);
	for(i=0;i<a.size();i++)
	{
		if((a[i]>='A')&&(a[i]<='Z'))
		{
			if(a[i]+k>90)
				a[i]=a[i]+k-49;
			else a[i]=a[i]+k;
			k++;
		}
		else if((a[i]>='a')&&(a[i]<='z'))
		{
			if(a[i]+k>122)
				a[i]=a[i]+k-25;
			else a[i]=a[i]+k;
			k++;
		}
	}
	cout<<a;
	return 0;
}
