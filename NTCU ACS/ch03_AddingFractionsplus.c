#include <stdio.h>
int main(void)
{
    int num1, denom1, num2, denom2, num3, denom3, result_num, result_denom;

    scanf("%d/%d", &num1, &denom1);
    scanf("%d/%d", &num2, &denom2);
    scanf("%d/%d", &num3, &denom3);
    result_num = num1 * denom2 * denom3 + num2 * denom1 * denom3 + num3 * denom1 * denom2;
    result_denom = denom1 * denom2 * denom3;
    printf("%d/%d", result_num, result_denom);
    return 0;
}