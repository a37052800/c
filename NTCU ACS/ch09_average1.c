#include <stdio.h>
int main()
{
    double n[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%lf", &n[i]);
    }
    double sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += n[i];
    }
    printf("%.2f", sum / 4);
}