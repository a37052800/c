#include <iostream>
using namespace std;
long f1(int x);
int main()
{
	int n;
	cin>>n;
	cout<<f1(n); //�j�骩 
	return 0;
}
//�j�骩 
long f1(int x)
{
	long y=1,i;
	for(i=1;i<=x;i++) y=y*i;
	return y;
}
