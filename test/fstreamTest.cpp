#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	ifstream fin;
	ofstream fout;
	string s[10];

	fin.open("fstreamTest.txt");
	fout.open("fstreamTest.txt");
	if(!fin.is_open()) cout<<"fail";
	if(!fout.is_open()) cout<<"fail";
	for(int i=0;i<=9;i++)
	{
		fin>>s[i];
		cout<<s[i];
	}
	for(int i=0;i<=9;i++)
	{
		s[i]="0000000000";
		fout<<s[i]<<endl;
	}

	fin.close();
	fout.close();
	clrscr();
	return 0;
}
