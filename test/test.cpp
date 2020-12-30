<<<<<<< HEAD
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
=======
#include <iostream>
using namespace std;
int main()
{
    int x,c=0/*,i=1*/;
    cin >> x;
    /*while(i<x/i)
    {
        if(x%i==0)
        {
            c += i + (x / i);
            i++;
        }
        else
        {
            i++;
        }
    }*/
    for (int i = 1; i < x / i; i++)
    {
        if ((x % i) == 0)
            c += i + (x / i);
    }
    cout << c-x;
}
>>>>>>> b2801d48e9c953e9f1e03c37861f86703437ed36
