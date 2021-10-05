#include <stdio.h>
int main()
{
    float loan, rate, pay;
    scanf("%f%f%f", &loan, &rate, &pay);
    for (int i = 0; i < 3; i++)
    {
        loan = loan * (rate / 12.0 * 0.01 + 1.0) - pay;
        printf("$%.2f", loan);
        if(i<2)
            printf("\n");
    }
}