#include <stdio.h>
int main()
{
    int boollen[10] = {}, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        if (boollen[n % 10] > 0)
            boollen[n % 10] = 2;
        else
            boollen[n % 10] = 1;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (boollen[i] == 2)
        {
            printf("Repeated digit");
            return 0;
        }
    }
    printf("No repeated digit");
}