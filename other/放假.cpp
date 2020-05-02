#include <iostream>
using namespace std;
int main()
{ 
	int P,L;
	cout<<"輸入風力(級)=";
	cin>>P;
	cout<<"輸入24小時雨量(毫米)=";
	cin>>L;
	if (P<0) cout<<"錯誤";
	if ((P>=0)&&(P<8)) cout<<"一般風力";
	if ((P>=8)&&(P<12)) cout<<"輕度颱風";
	if ((P>=12)&&(P<16)) cout<<"中度颱風";
	if (P>=16) cout<<"強烈颱風";
	if (L<0) cout<<"錯誤";
	cout<<endl;
	if (L==0) cout<<"無雨";
	if ((L>=0)&&(L<80)) cout<<"小雨";
	if ((L>=80)&&(L<200)) cout<<"大雨";
	if ((L>=200)&&(L<350)) cout<<"豪雨";
	if ((L>=350)&&(L<500)) cout<<"大豪雨";
	if (L>=500) cout<<"超大豪雨";
	cout<<endl;
	if ((P>8)||(L>350)){cout<<"達放假標準";}else{cout<<"未達放假標準";}
	return 0;
}
