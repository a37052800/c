#include <iostream>
using namespace std;
int main()
{ 
	int G;
	cout<<"��J����=";
	cin>>G;
	if ((G>=0)&&(G<60)) cout<<"D";
	if ((G>=60)&&(G<70)) cout<<"C";
	if ((G>=70)&&(G<80)) cout<<"B";
	if ((G>=80)&&(G<=100)) cout<<"A";
	//if ((G>=100)||(G<=0))cout<<"���~";
	if (!((G>=0)&&(G<=100)))cout<<"���~";
	return 0;
}
