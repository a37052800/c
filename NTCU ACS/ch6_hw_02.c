#include <stdio.h>

int main(void) {
	printf("Enter two integers: ");
	int a,b;
	scanf("%d%d",&a,&b);
	while(a!=0)
	{
		b = b - (b/a)*a;
		int t = a;
		a = b;
		b = t;
	}
	printf("Greatest common divisor: %d",b);
}

