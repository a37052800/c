#include <stdio.h>
int f0, f1;
int Fibonacci(int);
int main()
{
    int n;
    scanf("%d%d%d", &f0, &f1, &n);
    printf("%d", Fibonacci(n+1));
}
int Fibonacci(int n)
{
    if (n == 0)
        return f0;
    else if (n == 1)
        return f1;
    else
        return Fibonacci(n - 2) + Fibonacci(n - 1);
}