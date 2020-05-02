#include <iostream>
#include <fstream> 
#include <string>
#include <sstream>
//#include <cstdlib> //codeblocks
using namespace std;
string s[10];
ifstream fin;
ofstream fout;
void print();
void reset();
int order(int v,char c);
int main()
{
	system("cls");
	cout<<"璹布╰参"<<endl<<"1.穝砞﹚布叭"<<endl<<"2.璹布"<<endl<<"3.癶布"<<endl<<"4.癶"<<endl;
	print();
	cin.sync();
	switch (cin.get())
	{
		case '1': reset(); break;
		case '2': order(0,'1'); break;
		case '3': order(0,'0'); break;
		case '4': exit(0); break;
		default : system("cls"); main(); break;
	}
	return 0;
}
void print()
{
		fin.open("璹布╰参.txt");
		if(!fin.is_open()) cout<<"fail";
		int i,j;
		cout<<"========================"<<endl;
		cout<<"  ";
		
		for(j=0;j<=9;j++) cout<<j<<" ";
		cout<<endl;
		for(i=0;i<=9;i++)
		{
			fin>>s[i];
			cout<<char('A'+i);
			for(j=0;j<=9;j++)
			{
				
				if(s[i][j]=='0') cout<<"〖";
				if(s[i][j]=='1') cout<<"」";
				if(s[i][j]=='3') cout<<"》";
			}
			cout<<endl;
		}
		cout<<"========================"<<endl;
		fin.close();
}
void reset()
{
	char a;
	system("cls");
	cout<<"絋﹚琌睲埃(Y/N)";
	fout.open("璹布╰参.txt");
	if(!fout.is_open()) cout<<"fail";
	cin.sync();
	a=cin.get();
	if((a=='y')||(a=='Y'))
	{
		for(int i=0;i<=9;i++)
		{
			fout<<"0000000000"<<endl;
		}
		cout<<"睲埃畒"<<endl;
		print();
		cout<<"糷匡虫";
		system("pause");
		fout.close();
		main();
	}
	else
	{
		cout<<"ゼ睲埃畒"<<endl;
		print();
		cout<<endl<<"糷匡虫";
		system("pause");
		fout.close();
		main();
	}
}
int order(int v,char c)
{
	string a;
	int x,y,i,j,t=0;
	system("cls");
	print();
	if(c=='1') cout<<"璹布 q 瞒秨"<<endl<<"叫块璹布腹絏:";
	else cout<<"璹布 q 瞒秨"<<endl<<"叫块癶布腹絏:";
	cin>>a;
	if((a=="q")||(a=="Q"))
	{
		if(c=='1') cout<<""<<v<<"眎布"<<v*300<<"じ" <<endl<<"絋﹚琌璹(Y/N)";
		else cout<<""<<v<<"眎布"<<v*300<<"じ" <<endl<<"絋﹚琌璹(Y/N)";
		char w;
		cin.sync();
		w=cin.get();
		if((w=='y')||(w=='Y'))
		{
			for(i=0;i<10;i++)
				for(j=0;j<10;j++)
					if(s[i][j]=='3') s[i][j]=c;
		}
		else
		{
			system("cls");
			for(i=0;i<10;i++)
				for(j=0;j<10;j++)
					if(s[i][j]=='3')
					{
						if(c=='0') s[i][j]='1';
						else s[i][j]='0';
					}
			fout.open("璹布╰参.txt");
			if(!fout.is_open()) cout<<"fail";
			for(int i=0;i<=9;i++) fout<<s[i]<<endl;
			fout.close();
			cout<<""<<endl;
			print();
			cout<<endl<<"糷匡虫";
			system("pause");
			main();
		}
		fout.open("璹布╰参.txt");
		if(!fout.is_open()) cout<<"fail";
		for(int i=0;i<=9;i++) fout<<s[i]<<endl;
		fout.close();
		main();
	}
	if((a[0]<='J')&&(a[0]>='A')) x=int(a[0]-65);
	else if((a[0]<='j')&&(a[0]>='a')) x=int(a[0]-97);
	else order(v,c);
	if((a[1]>='0')&&(a[1]<='9')) y=int(a[1]-48);
	else order(v,c);
	if(c=='1')
	{
		if(s[x][y]!='0')
		{
			cout<<"畒璹叫穝块";
			system("pause");
			order(v,c);
		}
	}
	if(c=='0')
	{
		if(s[x][y]!='1')
		{
			cout<<"獶璹畒叫穝块";
			system("pause");
			order(v,c);
		}
	}
	s[x][y]='3';
	fout.open("璹布╰参.txt");
	if(!fout.is_open()) cout<<"fail";
	for(int i=0;i<=9;i++) fout<<s[i]<<endl;
	fout.close();
	system("cls");
	order(v+1,c);
}
