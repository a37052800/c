#include <stdio.h>
int main()
{
    float dollars;
    scanf("%f", &dollars);
    printf("%.2f", dollars * 1.05 + 0.004);
}