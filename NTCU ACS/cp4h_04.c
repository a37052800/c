#include <math.h>
#include <stdio.h>
int main()
{
    int input;
    printf("Enter a number between 0 and 32767:");
    scanf("%d", &input);
    printf("In octal, your number is:");
    printf("%05o", input);
}