#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	string t,s[1000];
	char c[1000][1000];
	getline(cin,t);
	stringstream ss;
	int b[1000],k=0,i;
	memset(b,0,sizeof(b));
	ss.clear();
	ss.str(t);
	while(!ss.eof())
	{
		
		if(ss>>b[k]) ss>>c[k];
		k++;
		cout<<b[k-1]<<endl<<c[k-1]<<endl;
	}
	for(i=0;i<k;i++) cout<<endl<<b[i]<<endl<<c[i];
	return 0;
}

