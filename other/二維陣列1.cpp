#include<iostream>
using namespace std;

int main()
{
	
	
	long a[100][100];
	long m,n,x,y;
	
	cin>>m>>n;
	
	for(long i=1;i<=m;i++)
	{   for(long j=1;j<=n;j++)
		  { cin>>a[i][j];
			  }	
		
	}	
	
	 cout<<"========================================"<<endl;
	
	
		
	for(long i=1;i<=m;i++)
	{   for(long j=1;j<=n;j++)
		  { cout<<a[i][j]<<" ";
			  }	
	cout<<endl;}
	
	 cout<<"========================================"<<endl;
	 
		for(long j=1;j<=n;j++)
	   {   for (long i=1;i<=m/2;i++)
	   	    {   //a[i][j]<->a[m+1-i][j];
			   x=a[i][j];
			   y=a[m+1-i][j];
			   a[i][j]=y;
			   a[m+1-i][j]=x;
			   	
			   		   }
	   }
	   
	   
	 cout<<"========================================"<<endl;
	
	
		
	for(long i=1;i<=m;i++)
	{   for(long j=1;j<=n;j++)
		  { cout<<a[i][j]<<" ";
			  }	
	cout<<endl;}
	return 0;
}
