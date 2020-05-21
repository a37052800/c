#include<iostream>
using namespace std;
int testArr(int &a[0])
{
	for(int i=0;i<4;i++) cout<<a[i];
}
int main()
{
	int ar[4]={0,1,2,3};
	testArr(ar[0]);
}
