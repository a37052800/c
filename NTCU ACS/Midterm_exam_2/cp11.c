#include <math.h>
#include <stdio.h>
int func(int x)
{
    return 3 * pow(x, 5) + pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;
}
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", func(x));
}