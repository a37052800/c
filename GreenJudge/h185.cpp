#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int l=0;l<n;l++)
	{
		int ai,aj;
		cin>>ai>>aj;
		int a[ai][aj];
		for(int i=0;i<ai;i++)
		{
			for(int j=0;j<aj;j++)
			{
				cin>>a[i][j];
			}
		}
		int x=a[ai][0];
		for(int i=ai,j=0;i<ai&&j<aj;j++,i++)
		{
			if(x!=a[i][j])
			{
				cout<<"NO";
				goto END;
			}
			if(i=ai)
			{
				i--;
				x=a[i][0];
			}
		}
		cout<<"YES"
		END:;
	}
}
