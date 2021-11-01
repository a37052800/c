#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (!((n >= 1) && (n <= 9999)))
    {
        printf("Please enter the whole between 1 and 9999");
        return 0;
    }
    int digits = 0, temp = n;
    for (digits = 0; temp > 0; digits++)
        temp /= 10;
    if (digits > 1)
        printf("The number %d has %d digits", n, digits);
    else
        printf("The number %d has %d digit", n, digits);
}