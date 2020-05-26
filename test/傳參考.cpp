#include<iostream>
using namespace std;
void test1(int *p)
{
	cout << "Ft1 " << *p << endl;
}
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
	test1(&t);
	cout<<"main2 "<<t<<endl;
}

