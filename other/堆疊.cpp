#include <iostream> 
#include <string> 
using namespace std;
int k=0;
string a;
int main()
{
	system("cls");
	cin.sync();
	switch (cin.get())
	{
		case '1':
			cin.sync();
			a+=cin.get();
			k++;
			break;
		case '2':
			a.erase(k-1,k);
			k--;
			break;
		case '3':
			for(int i=k-1;i>=0;i--)
			{
				cout<<"|"<<a[i]<<"|"<<endl<<"---"<<endl;
			}
			system("pause");
	 		break;
	 	case '4':
	 		return 0;
	 		break;
	}
	main();
}
