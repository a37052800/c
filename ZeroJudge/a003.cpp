#include<iostream>
using namespace std;
int main()
{
	int m,d;
	cin>>m>>d;
	switch ((m*2+d)%3)
	{
		case 0:
			cout<<"´¶³q";
			break;
		case 1:
			cout<<"¦N";
			break;
		case 2:
			cout<<"¤j¦N";
			break;
	}
	return 0;
}

