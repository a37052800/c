#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int k=0,x=0;
double s[1000];
string tt,q;
void print();
int main()
{
	system("cls");
	print();
	cin.sync();
	string t;
	int tn;
	stringstream ss;
	cin>>t;
	switch (t[0])
	{
		case '+':
			s[k-2]=s[k-2]+s[k-1];
			k--;
			break;
		case '-':
			s[k-2]=s[k-2]-s[k-1];
			k--;
			break;
		case '*':
			s[k-2]=s[k-2]*s[k-1];
			k--;

			break;
		case '/':
			s[k-2]=s[k-2]/s[k-1];
			k--;
			break;
		default:
			ss.clear();
			ss.str(t);
			ss>>tn;
			s[k]=tn;
			k++;
			break;
	}
	main();
}
void print()
{
	cout<<"=========="<<endl;
	for(int i=k-1;i>=0;i--)
		cout<<s[i]<<endl<<"----------"<<endl; 
	cout<<"=========="<<endl;
}
