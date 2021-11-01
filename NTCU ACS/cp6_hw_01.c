#include <stdio.h>
int main(void)
{
    double n, max = 0;
    while (1)
    {
        printf("Enter a number (enter 0 to end): ");
        scanf("%lf", &n);
        if (n == 0)
            break;
        max = n > max ? n : max;
    }
    printf("The largest number entered was %.2f", max);
}