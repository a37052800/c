#include<iostream>
using namespace std;
void test(int &p)
{
	p++;
	cout<<"Ft "<<p<<endl;
}
int main()
{
	int t=20;
	cout<<"main1 "<<t<<endl;
	test(t);
	cout<<"main2 "<<t<<endl;
}

