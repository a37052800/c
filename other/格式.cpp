#include <iostream>
using namespace std;
int main()
{
long a;
cin>>a;
if ((a>=0)&&(a<=100))
	{
	cout<<"正確" ;
	}
else 
	{
	cout<<"錯誤"<<endl ;
	cout<<"請輸入0~100的數";
	}

	return 0;
}
