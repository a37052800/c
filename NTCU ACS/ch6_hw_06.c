#include <stdio.h>
int main()
{
    printf("Enter a fraction (x/y): ");
    int ia, ib;
    scanf("%d/%d", &ia, &ib);
    int a = ia, b = ib;
    while (a != 0)
    {
        b = b - (b / a) * a;
        int t = a;
        a = b;
        b = t;
    }
    printf("GCD = %d\n", b);
    printf("In lowest terms: %d/%d", ia / b, ib / b);
}