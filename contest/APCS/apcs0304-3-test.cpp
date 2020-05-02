#include <iostream>
#include <cstdlib>
#include <ctime>
#define add for(i=0;i<n;i++) for(j=0;j<n;j++)
#define f for(j=1;j<=i*2;j++)
#define c(n) ((n-1)/2)
using namespace std;
int main()
{
	int n=59,s=rand()%4,i,j,c;
	int a[n][n];
	srand(time(NULL));
	add a[j][i]=rand()%10;
	for(i=0;i<n;i++)
	{
		cout<<endl;
		for(j=0;j<n;j++) cout<<a[j][i]<<" ";
	}
	cout<<endl<<a[c(n)][c(n)];
	for(i=1;i<=c(n);i++)
	{
		switch (s)
		{
			case 0:
				{
					f cout<<a[c(n)-i][c(n)+i-j]; //U
					f cout<<a[c(n)-i+j][c(n)-i]; //R
					f cout<<a[c(n)+i][c(n)-i+j]; //D
					f cout<<a[c(n)+i-j][c(n)+i]; //L
					break;
				}
			case 1:
				{
					f cout<<a[c(n)-i+j][c(n)-i]; //R
					f cout<<a[c(n)+i][c(n)-i+j]; //D
					f cout<<a[c(n)+i-j][c(n)+i]; //L
					f cout<<a[c(n)-i][c(n)+i-j]; //U
					break;
				}
			case 2:
				{
					f cout<<a[c(n)+i][c(n)-i+j]; //D
					f cout<<a[c(n)+i-j][c(n)+i]; //L
					f cout<<a[c(n)-i][c(n)+i-j]; //U
					f cout<<a[c(n)-i+j][c(n)-i]; //R
					break;
				}
			case 3:
				{
					f cout<<a[c(n)+i-j][c(n)+i]; //L
					f cout<<a[c(n)-i][c(n)+i-j]; //U
					f cout<<a[c(n)-i+j][c(n)-i]; //R
					f cout<<a[c(n)+i][c(n)-i+j]; //D
					break;
				}
		}
	}
	cout<<endl;
	return 0;
}
