#include<iostream>
using namespace std;
int main ()
{      long a,b,i;
    cout<<"¿é¤Ja=";
    cin>>a;  
    cout<<"¿é¤Jb=";
    cin>>b;
       for (i=1;i<=a;i++)
			{     if (a%i==0&&b%i==0)
				    {  
				    cout<<i<<endl;							
					}		
			}
		return 0;
}
