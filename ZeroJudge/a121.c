#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int prime[100000000] = {};
int main(void)
{
    int a = 0, b = 0;
    prime[1] = 1;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        for (int i = 2; i <= sqrt(b) + 1; i++)
        {
            if (prime[i] == 1)
                continue;
            for (int j = 2; j <= b / i; j++)
            {
                prime[i * j] = 1;
            }
        }
        int sum = 0;
        for (int i = a; i <= b; i++)
        {
            if (prime[i] == 0)
            {
                sum++;
            }
        }
        /*for (int i = 0; i < 100; i++)
        {
            printf("%d ", prime[i]);
        }*/
        printf("%d\n", sum);
    }
}