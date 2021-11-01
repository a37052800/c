#include <stdio.h>
int main()
{
    printf("Enter amount of taxable income: ");
    float income;
    scanf("%f", &income);
    printf("Tax due is: $");
    if(income>7000)
        printf("%.2f", 230 + (income - 7000) * 0.06);
    else if(income>5250)
        printf("%.2f", 142.5 + (income - 5250) * 0.05);
    else if(income>3750)
        printf("%.2f", 82.5 + (income - 3750) * 0.04);
    else if(income>2250)
        printf("%.2f", 37.5 + (income - 2250) * 0.03);
    else if(income>750)
        printf("%.2f", 7.5 + (income - 750) * 0.02);
    else
        printf("%.2f", income * 0.01);
}