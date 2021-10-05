#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int pow[6];
    for (int i = 1; i <= 5; i++)
    {
        pow[i] = 1;
        for (int j = 0; j < i; j++)
        {
            pow[i] *= x;
        }
    }
    printf("%d", 3 * pow[5] + 2 * pow[4] - 5 * pow[3] - pow[2] + 7 * x - 6);
}