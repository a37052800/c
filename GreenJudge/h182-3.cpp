#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int l = 0; l < n; l++)
	{
		int ai, aj,dc=0,temp;
		cin >> ai >> aj;
		int a[aj+1];
		for(int j=1;j<=aj;j++)
		{
			cin>>a[j];
		}
		for(int i=1;i<ai;i++)
		{
			cin>>a[0];
			for(int j=1;j<=aj;j++)
			{
				if(temp==a[j])
				{
					a[j]=temp;
				}
			}
		}
		if(dc==0) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
