#include <iostream>
using namespace std;
int main()
{
	long a[3][4]={{0,0,0,0},{0,6,7,8},{0,8,3,1}};
	long i,j,sum;
	a[2][3]=99;
	for(i=1;i<=2;i++)
	{
		sum=0;
		for(j=1;j<=3;j++)
		{
			cout<<a[i][j]<<" ";
			sum=sum+a[i][j];
		}
		cout<<" ²Ä"<<i<<"¦C©M"<<sum<<endl; 
	}
	return 0;
}
