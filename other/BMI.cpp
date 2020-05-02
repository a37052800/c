#include <iostream>
using namespace std;
int main()
{ 
	double L,M,BMI;
	cout<<"輸入身高(cm)=";
	cin>>L;
	L=L/100;
	cout<<"輸入體重(kg)=";
	cin>>M; 
	BMI=M/(L*L);
	cout<<"BMI="<<BMI;
	if (BMI<18.5) cout<<"體重過輕";
	if ((BMI>=18.5)&&(BMI<24)) cout<"健康體位";
	if ((BMI>=24)&&(BMI<27)) cout<"過重";
	if ((BMI>=27)&&(BMI<30)) cout<"輕度肥胖";
	if ((BMI>=30)&&(BMI<35)) cout<"中度肥胖";
	if (BMI>=35) cout<"重度肥胖";
	return 0;
}
