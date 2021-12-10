#include <stdio.h>
int main()
{
    double n[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%lf", &n[i]);
    }
    double sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += n[i];
    }
    printf("%.2f", sum / 3);
}