#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string sx;
	stringstream ss;
	int x[1000],i,s=0,m=0;
	cin>>sx;
	for(i=0;i<sx.size();i++)
	{
		ss.clear();
		ss<<sx[i];
		ss>>x[i];
	}
	for(i=sx.size()-1;i>=0;i-=2)
	{
		s=s+x[i];
	}
	for(i=sx.size()-2;i>=0;i-=2)
	{
		m=m+x[i];
	}
	if(s>m) cout<<s-m;
	else cout<<m-s;
	return 0;
}
