#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int l = 0; l < n; l++)
	{
		int ai, aj,dc=0;
		cin >> ai >> aj;
		int a[aj],temp[aj];
		for(int j=0;j<aj;j++)
		{
			cin>>a[j];
		}
		for(int i=1;i<ai;i++)
		{
			for(int j=0;j<aj;j++)
			{
				cin>>temp[j];
			}
			for(int j=0;j<aj-1;j++)
			{
				if(a[j]==temp[j+1])
				{
					a[j]=temp[j];
				}
				else
				{
					a[j]=temp[j];
					dc=1;
				}
			}
			a[aj]=temp[aj];
		}
		if(dc==0) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
