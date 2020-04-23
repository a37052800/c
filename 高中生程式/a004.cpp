#include<iostream>
using namespace std;
int main()
{
	while(true)
	{
		int a;
		cin>>a;
		if(cin.eof()) return 0;
		else
		{
			if(((a%4==0)&&(a%100!=0))||(a%400==0))
				cout<<"¶|¦~"<<endl;
			else cout<<"¥­¦~"<<endl;
		}
	}
}

