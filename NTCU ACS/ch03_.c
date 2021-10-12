#include <stdio.h>
int main()
{
    int i1, j1, i2, j2;
    scanf("%d/%d", &i1, &j1);
    scanf("%d/%d", &i2, &j2);
    printf("%d/%d", i1 * i2, j1 * j2);
}