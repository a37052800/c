#include <stdio.h>
int main()
{
    int i1, i2, j1, j2;
    printf("Enter two fractions separated by a plus sign:");
    scanf("%d/%d+%d/%d", &i1, &j1, &i2, &j2);
    printf("The sum is %d/%d", i1 * j2 + i2 * j1, j1 * j2);
}