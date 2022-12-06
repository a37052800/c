#include <stdio.h>
int f0, f1;
int Fibonacci(int);
int main()
{
    scanf("%d%d", &f0, &f1);
    for (int i = 2; i < 6; i++)
    {
        printf("%d\n", Fibonacci(i));
    }
    printf("%d", Fibonacci(6)); //為了最後一個不要換行
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