#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        int n, j = 2, b = 0;
        scanf("%d", &n);
        while (j < n)
        {
            if (n % j == 0)
            {
                printf("N");
                b = 1;
                break;
            }
            j++;
        }
        if (!b)
            printf("Y");
    }
}