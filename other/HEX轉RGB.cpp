#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	cout<<endl<<" Hex : ";
	char a;
	string s;
	stringstream ss;
	int n,i,c[3]={0};
	cin.sync();
	cin>>s;
	if(s[0]=='#')
	{
		s.erase(0,1);
	}
	ss.clear();
	ss.str(s);
	ss>>hex>>n;
	for(i=0;i<=2;i++)
	{
		c[i]=n%(16*16);
		n=n/(16*16);	
	}
	cout<<"================"<<endl;
	cout<<"   R = "<<c[2]<<endl;
	cout<<"   G = "<<c[1]<<endl;
	cout<<"   B = "<<c[0]<<endl;
	cout<<"================"<<endl<<"Ä~ÄòÂà´«(Y/N)";
	cin.sync();
	a=cin.get();
	if((a=='Y')||(a=='y'))
	{
		system("cls");
		main();
	}
	return 0;
} 
