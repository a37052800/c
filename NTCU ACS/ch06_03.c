#include <stdio.h>
int main()
{
    printf("Enter integers (0 to terminate): ");
    int n, sum = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%d", &n);
    }
    printf("The sum is: %d", sum);
}