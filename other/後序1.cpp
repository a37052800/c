#include <iostream> 
#include <string> 
using namespace std;
int k=0;
string s[1000];
string q(char a);
void print();
int main()
{
	system("cls");
	string t;
	print();
	cin>>t;
	if((t[0]=='+')||(t[0]=='-')||(t[0]=='*')||(t[0]=='/'))
	{
		s[k-2]=q(t[0]);
		k--;
	}
	else
	{
		s[k]=t;
	 	k++;
	}
	main();
}
string q(char a)
{
	string t;
	t+='('+s[k-2]+a+s[k-1]+')';
	return t;
}
void print()
{
	cout<<"=============================="<<endl;
	for(int i=k-1;i>=0;i--)
	{
		cout<<s[i]<<endl;
		if(i>0)
			cout<<"-----------------------------"<<endl;
	}
	cout<<"=============================="<<endl;
}
