#include<iostream>
using namespace std;
//void exit();
int main()
{
	int n,d=1500000000;
	cin>>n;
	int m[n-1];
	for(int i=0;i<n-1;i++) cin>>m[i];
	if(n==2)
	{
		if(m[0]==1) cout<<2;
		else cout<<1;
		return 0;
	}
	for(int i=0;i<n-2;i++)
	{
		int t=0;
		t=m[i+1]-m[i];
		if(t<d) d=t;
	}
	for(int i=1;i<n-1;i++)
	{
		if(m[i]!=m[0]+(d*i))
		{
			cout<<m[i]-d;
			return 0;
		}
	}
	if((m[0]-d)<=0)
	{
		cout<<m[n-2]+d;
	}
	else
	{
		cout<<m[0]-d;
	}
	return 0;
}
/*void exit()
{
	system("pause");
	main();
}*/

