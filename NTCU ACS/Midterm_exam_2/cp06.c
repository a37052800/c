#include <stdio.h>
double avg(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%.2f", avg(a, b, c));
}