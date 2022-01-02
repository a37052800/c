#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int fib[256];
    memset(fib, 0, sizeof(fib));
    fib[1] = 1;
    fib[2] = 1;
    while (n != -1)
    {
        for (int i = 3; i <= n; i++)
        {
            if (fib[i] == 0)
                fib[i] = fib[i - 1] + fib[i - 2];
        }
        printf("%d", fib[n]);
        scanf("%d", &n);
    }
}