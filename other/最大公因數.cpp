#include<iostream>
using namespace std;
int main ()
{      long A,B,i,n;
    cout<<"��JA=";
    cin>>A;  
    cout<<"��JB=";
    cin>>B;
       for (i=1;i<=A;i++)
			{     if (A%i==0&&B%i==0)
				    {  
				    	n=i;						
					}		
			}
	cout<<n<<endl;
	return 0;
}
