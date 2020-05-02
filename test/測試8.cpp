#include <iostream>
using namespace std;
int f(int a[2]);
int main()
{
	int n[2];
	for(int i=0;i<3;i++) n[i]=i;
	cout<<f(n);
	return 0;
}
int f(int a[2])
{
		return a;
}
