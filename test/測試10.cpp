#include <iostream>
using namespace std;
int x=0;
int d=10;
int f(int n[])
{
	static int *t=&d;
	*t=*t+1;
	//*t++; <==¥À´ö 
	cout<<x<<"x"<<endl<<*t<<"t";
	*(n+2)=0;
	
}
int main()
{
	int *y=&x,n[10]={1,2,3,4,5,6,7,8,9,10};
	*y=2;
	f(n);
	for(int i=0;i<10;i++) cout<<n[i];
	for(int i=0;i<10;i++)
	{
		f(n);
		d++;
		cout<<endl<<d<<"d";
	}
	return 0;
}

