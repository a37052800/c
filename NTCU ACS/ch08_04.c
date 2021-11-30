#include <math.h>
#include <stdio.h>
int main()
{
    int rate, year;
    printf("Enter interest rate: ");
    scanf("%d", &rate);
    printf("Enter number of years: ");
    scanf("%d", &year);
    printf("\nYears%6d%%%6d%%%6d%%%6d%%%6d%%\n", rate, rate + 1, rate + 2, rate + 3, rate + 4);
    for (int i = 1; i <= year; i++)
    {
        printf("%3d    ", i);
        for (int j = 0; j < 5; j++)
        {
            printf("%7.2f", 100 * pow(1 + (rate + j) * 0.01, i));
        }
        printf("\n");
    }
}