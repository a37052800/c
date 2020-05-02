#include <iostream>
using namespace std;
int main()
{
	long a[100],i,b[100]={11,77,33,99,77,22},c[100]={11};
	a[1]=7;
	a[2]=3;
	a[3]=9;
	a[4]=7;
	a[5]=2;
	for(i=0;i<=7;i++)cout<<a[i]<<endl;
	cout<<"-----------------------------------------------"<<endl;
	for(i=0;i<=7;i++)cout<<b[i]<<endl;\
	cout<<"-----------------------------------------------"<<endl;
	for(i=0;i<=7;i++)cout<<c[i]<<endl;		
	return 0;
}
