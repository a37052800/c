#include <iostream>
#include <math.h>
using namespace std;
int main()
{
 int N,i,a=0;
 cin>>N;
 for(i=1;i<=sqrt(N);i++) 
 {
 	if (N%i==0)
	{
 		a=a+1;
 	}
 }
	if (a==1) 
		cout<<"YES";
	else
	
		cout<<"NO";
	return 0;
}
