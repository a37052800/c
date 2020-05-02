#include <iostream>
using namespace std;
int main()
{
	int a,b,t=999,ta,tb;
	cin>>a>>b;
	ta=a;
	tb=b;
	while(t!=0)
	{
		cout<<a<<"%"<<b<<"="<<a%b<<endl;
		t=a%b;
		a=b;
		b=t;
	}
	cout<<"GCD("<<ta<<","<<tb<<")="<<a;
	return 0;
}

