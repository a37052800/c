#include <iostream>
using namespace  std;
int main()
{
	int n,k,p[1000],l[1000]={0},i,j,d=1,x;
	cin>>n>>k;
	x=k;
	for(i=0;i<n;i++) cin>>p[i];
	for(i=0;i<1000;i++)
		for(j=0;j<n;j++)
		{
			if(i==p[j]) l[i]=1;
		}
	for(i=0;i<1000;i++)
	{
		if((l[i]==1)&&(x>0))
		{
			i=i+d;
			x--;
		} 
		else if(l[i]==1)
		{
			d++;
			x=k;
			i=-1;
		}
	}
	cout<<d;
	return 0;
}
