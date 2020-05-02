#include <iostream>
using namespace std;
int main()
{
	long a,b,c,x=0;
	cin>>a>>b>>c;
	if (a!=0) a=1;
	if (b!=0) b=1;
	if ((a&&b)==c) cout<<"AND"<<endl; else x+=1;
	if ((a||b)==c) cout<<"OR"<<endl; else x+=1;
	if ((a!=b)==c) cout<<"XOR"<<endl; else x+=1;
	if (x>=3) cout<<"IMPOSSIBLE";
	return 0;
}
