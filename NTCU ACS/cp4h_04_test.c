#include <math.h>
#include <stdio.h>
int main()
{
    int input;
    printf("Enter a number between 0 and 32767:");
    scanf("%d", &input);
    printf("In octal, your number is:");
    int output = 0, digit = 0;
    while (input > 0)
    {
        output += (input % 8) * pow(10, digit);
        input /= 8;
        digit++;
    }
    for (int i = 0; i <= digit; i++)
    {
        printf("%d", (int)(output / pow(10, digit - i)) % 10);
    }
}