#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i * i <= n; i += 2)
    {
        printf("%d", i * i);
        if ((i + 1) * (i + 1) < n)
        {
            printf("\n");
        }
    }
}