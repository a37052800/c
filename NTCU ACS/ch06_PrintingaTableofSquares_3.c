#include <stdio.h>
int main()
{
    int sum = 0;
    int i = 1;
    int n = 0;
    scanf("%d", &n);
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("%d", sum);
}