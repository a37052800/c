#include <iostream>
using namespace std;
int main()
{
 long n,i,a=0;
 cin>>n;
 for(i=1;i<=n;i++) 
 {
 	if (n%i==0)
	{
		cout<<i<<endl;
 		a=a+1;
 	}
 }
	if (a==2) 
		cout<<"���";
	else
		cout<<"�D���";
	return 0;
}
