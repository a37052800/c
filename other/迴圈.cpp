#include <iostream>
using namespace std;
int main()
{
	long a=0,b=0,i;
	for(i=1;i<=10000;i=i+7)
	{
		cout<<""<<i<<endl;
		b=b+i;
		a=a+1;
	}
	cout<<"---------------"<<endl<<a<<")  "<<b;
	return 0;
}
