#include <iostream>
using namespace std;
int main()
{ 
	int P,L;
	cout<<"��J���O(��)=";
	cin>>P;
	cout<<"��J24�p�ɫB�q(�@��)=";
	cin>>L;
	if (P<0) cout<<"���~";
	if ((P>=0)&&(P<8)) cout<<"�@�뭷�O";
	if ((P>=8)&&(P<12)) cout<<"���׻䭷";
	if ((P>=12)&&(P<16)) cout<<"���׻䭷";
	if (P>=16) cout<<"�j�P�䭷";
	if (L<0) cout<<"���~";
	cout<<endl;
	if (L==0) cout<<"�L�B";
	if ((L>=0)&&(L<80)) cout<<"�p�B";
	if ((L>=80)&&(L<200)) cout<<"�j�B";
	if ((L>=200)&&(L<350)) cout<<"���B";
	if ((L>=350)&&(L<500)) cout<<"�j���B";
	if (L>=500) cout<<"�W�j���B";
	cout<<endl;
	if ((P>8)||(L>350)){cout<<"�F�񰲼з�";}else{cout<<"���F�񰲼з�";}
	return 0;
}
