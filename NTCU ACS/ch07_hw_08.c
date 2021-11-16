#include <math.h>
#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter a positive number: ");
    double x, y = 1;
    scanf("%lf", &x);
    x = fabs(x);
    for (int i = 0; i < 8; i++)
    {
        y = (y + (double)x / y) / 2.0;
    }
    printf("Square root: %.5lf", y);
}