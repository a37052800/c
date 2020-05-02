#include<iostream>
using namespace std;
int main()
{    long n,i,j;
    cin>>n;
	 for (i=1;i<=n;i++)
	      {  for (j=1;j<=n-i;j++)
	         { 
			      cout<<"0 ";

             }
             for (j=1;j<=i;j++)
             {
             	cout<<"1 ";
			 }
		  cout<<endl;

             
		   } 

	
	
	return 0;
}
