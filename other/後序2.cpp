#include <iostream> 
#include <string>
#include <sstream>
using namespace std;
int k=0;
double n[1000];
string s[1000];
string qs(char a);
void qn(char a);
void print();
int main()
{
	system("cls");
	string ts;
	stringstream ss;
	print();
	cin>>ts;
	
	if((ts[0]=='+')||(ts[0]=='-')||(ts[0]=='*')||(ts[0]=='/'))
	{
		if(k<=1) main();
		s[k-2]=qs(ts[0]);
		qn(ts[0]);
		k--;
	}
	else if((ts[0]=='q')||(ts[0]=='Q')) return 0;
	else
	{
		s[k]=ts;
		ss.clear();
		ss.str(ts);
		ss>>n[k];
	 	k++;
	}
	main();
}
string qs(char a)
{
	string t;
	t+='('+s[k-2]+a+s[k-1]+')';
	return t;
}
void qn(char a)
{
	switch (a)
	{
		case '+':n[k-2]=n[k-2]+n[k-1];break;
		case '-':n[k-2]=n[k-2]-n[k-1];break;
		case '*':n[k-2]=n[k-2]*n[k-1];break;
		case '/':n[k-2]=n[k-2]/n[k-1];break;
	}
}
void print()
{
	cout<<"========================================================="<<endl;
	for(int i=k-1;i>=0;i--)
	{
		cout<<s[i]<<" = "<<n[i]<<endl;
		if(i>0)
			cout<<"---------------------------------------------------------"<<endl;
	}
	cout<<"========================================================="<<endl;
}
