#include <iostream>
using namespace std;
void f(int n,int t,int u,int v);
int main()
{
	int n;
	cin>>n;
	f(n,1,3,2);
	return 0;
}
void f(int n,int t,int u,int v)
{
	if(n!=0)
	{
	f(n-1,t,v,u);
	cout<<"Ring "<<n<<" from "<<t<<" to "<<u<<endl;
	f(n-1,v,u,t);
	}
}
