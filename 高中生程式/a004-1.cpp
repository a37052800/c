#include<iostream>
using namespace std;
int charToInt(char ch[])
{
	int i=0,ans=0;
	while(ch[i]!='\0')
	{
		ans=ans*10+ch[i]-48;
		i++;
	}
	return ans;
}
int main()
{
	char a[5];
	cin.getline(a,5);
	if(cin.eof()) return 0;
	else
	{
		int b=charToInt(a);
		if(((b%4==0)&&(b%100!=0))||(b%400==0))
			cout<<"¶|¦~"<<endl;
		else cout<<"¥­¦~"<<endl;
	}
	cin.clear();
	cin.sync();
	main();
}

