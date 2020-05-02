#include <iostream>
#define add for(i=0;i<n;i++) for(j=0;j<n;j++)
#define f for(j=1;j<=i*2;j++)
#define c(n) ((n-1)/2)
using namespace std;
int main()
{
	int n,s,i,j,c;
	cin>>n>>s;
	int a[n][n];
	add cin>>a[j][i];
	cout<<a[c(n)][c(n)];
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

/*
7
0
8 5 4 1 3 7 6
9 8 2 4 3 6 5
7 5 2 3 5 8 1
1 7 8 2 3 9 5
6 7 2 3 8 6 4
8 0 5 2 9 3 1
9 7 3 6 0 5 4
*/
/*
5
3
3 4 2 1 4
4 2 3 8 9
2 1 9 5 6
4 2 3 7 8
1 2 6 4 3
*/
