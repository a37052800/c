#include <stdio.h>
int main()
{
    int dollar;
    scanf("%d", &dollar);
    printf("%d %d %d %d", dollar / 20, dollar % 20 / 10, dollar % 10 / 5, dollar % 5);
}