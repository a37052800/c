#include <stdio.h>
int main()
{
    int input;
    printf("Enter a three-digit number:");
    scanf("%d", &input);
    printf("The reversal is ");
    while (input > 0)
    {
        printf("%d", input % 10);
        input /= 10;
    }
}