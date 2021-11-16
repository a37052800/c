#include <stdio.h>
double fun(int n)
{
    long int mux = 1;
    for (int i = 1; i <= n; i++)
        mux *= i;
    return 1.0 / mux;
}
int main()
{
    int n;
    scanf("%d", &n);
    double e = 0;
    for (int i = 1; i <= n; i++)
        e += fun(i);
    printf("%.4f", e + 1);
}