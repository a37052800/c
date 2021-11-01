#include <stdio.h>
int main()
{
    printf("Enter number of entries in table: ");
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n;i++)
    {
        printf("%10d%10d\n", i, i * i);
    }
}