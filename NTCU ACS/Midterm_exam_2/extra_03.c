#include <stdio.h>
int f0, f1, f2, f3;
int Fibonacci(int);
int main()
{
    int n;
    scanf("%d%d%d%d%d", &f0, &f1, &f2, &f3, &n);
    if (n < 0)
    {
        printf("error");
        return 0;
    }
    printf("%d", Fibonacci(n + 3));
}
int Fibonacci(int n)
{
    if (n == 0)
        return f0;
    else if (n == 1)
        return f1;
    else if (n == 2)
        return f2;
    else if (n == 3)
        return f3;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2) - Fibonacci(n - 4) * 2;
}