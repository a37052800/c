#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int m=0,n=0,x[100][100]={{0},{0}},i=0,j=0;
	scanf ("%d%d",&m,&n);
	for( i=0;i<m;i++)
	{
		for( j=0;j<n;j++)	scanf ("%d",&x[i][j]);
	}
	for( i=0;i<n;i++)
	{
		for( j=0;j<m;j++)
		{
			printf ("%d ",x[j][i]);
		}
		if(i!=(n-1))	puts("");
	}
}