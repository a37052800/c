#include <iostream>
#include <conio.h>
using namespace std;
void print();
int main()
{
	print();
	char a;
	a=getch();
	switch(a)
	{
		case 'a':
			cout<<char(8);
			break;
		case 'd':
			cout<<" ";
			break;
		case 'w':
			cout<<"  ";
			for(int i=0;i<1000;i++) cout<<'\b'; ////////////////// 
			break;
		case 's':
			cout<<'\b'<<"  ";
			for(int i=0;i<1000;i++) cout<<'\b';
			cout<<'\n';
			break;
	}
	main();
	return 0;
}
void print()
{
	cout<<"¢i ";
	for(int i=0;i<3;i++) cout<<'\b';
}
