#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
string s[10];
ifstream fin;
ofstream fout;
void print();
void reset();
void order();
void unorder();
int main()
{
	system("cls");
	cout<<"訂票系統"<<endl<<"1.重新設定票務"<<endl<<"2.訂票"<<endl<<"3.退票"<<endl<<"4.退出"<<endl<<"============================"<<endl;
	print();
	switch (cin.get())
	{
		case '1': reset(); break;
		case '2': order(); break;
		case '3': unorder(); break;
		case '4': return 0; break;
		default : system("cls"); main(); break;
	}
	return 0;
}
void print()
{
		fin.open("訂票系統.txt");
		if(!fin.is_open()) cout<<"fail";
		int i,j;
		cout<<"  ";
		for(j=0;j<=9;j++) cout<<j<<" ";
		cout<<endl;
		for(i=0;i<=9;i++)
		{
			fin>>s[i];
			switch (i)
			{
				case 0: cout<<"A"; break;
				case 1: cout<<"B"; break;
				case 2: cout<<"C"; break;
				case 3: cout<<"D"; break;
				case 4: cout<<"E"; break;
				case 5: cout<<"F"; break;
				case 6: cout<<"G"; break;
				case 7: cout<<"H"; break;
				case 8: cout<<"I"; break;
				case 9: cout<<"J"; break;
			}

			for(j=0;j<=9;j++)
			{

				if(s[i][j]=='0') cout<<"□";
				if(s[i][j]=='1') cout<<"★";
			}
			cout<<endl;
		}
		fin.close();
}
void reset()
{
	system("cls");
	cout<<"確定是否清除(Y/N)";
	fout.open("訂票系統.txt");
	if(!fout.is_open()) cout<<"fail";
	cin.ignore();
	if(cin.get()=='y'||'Y')
	{
		for(int i=0;i<=9;i++)
		{
			s[i]="0000000000";
			fout<<s[i]<<endl;
		}
		system("pause");
		cin.ignore();
		main();
	}
	else
	{
		system("pause");
		main();
	}
}
void order()
{
	system("cls");
	print();

}
void unorder()
{
	system("cls");
	print();
}
