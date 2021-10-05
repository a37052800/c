#include <stdio.h>
int main()
{
    float C, F;
    scanf("%f", &C);
    F = (C * 9 + 160) / 5;
    printf("%.2f", F);
}