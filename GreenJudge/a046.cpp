#include <iostream>
using namespace std;
int main()
{
	int w,h;
	cin>>w>>h;
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=w;j++) cout<<"#";
		cout<<endl;
	} 
	return 0;
}
