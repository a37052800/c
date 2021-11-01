#include <stdio.h>
int main()
{
    printf("Enter a nonnegative integer: ");
    int n, sum = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        sum++;
        n /= 10;
    }
    printf("The number has %d digit(s).", sum);
}