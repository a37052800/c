#include <iostream>
using namespace std;
int main()
{ 
	double L,M,BMI;
	cout<<"��J����(cm)=";
	cin>>L;
	L=L/100;
	cout<<"��J�魫(kg)=";
	cin>>M; 
	BMI=M/(L*L);
	cout<<"BMI="<<BMI;
	if (BMI<18.5) cout<<"�魫�L��";
	if ((BMI>=18.5)&&(BMI<24)) cout<"���d���";
	if ((BMI>=24)&&(BMI<27)) cout<"�L��";
	if ((BMI>=27)&&(BMI<30)) cout<"���תέD";
	if ((BMI>=30)&&(BMI<35)) cout<"���תέD";
	if (BMI>=35) cout<"���תέD";
	return 0;
}
