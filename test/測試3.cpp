#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string s,a,b,c;
	int na,nb,nc;
	stringstream ss;
	getline(cin,s);
	ss.clear();
	ss.str(s);
	ss>>na;
	ss>>nb;
	ss>>nc;
	cout<<na<<endl<<nb<<endl<<nc<<endl<<na+nb+nc;
}

