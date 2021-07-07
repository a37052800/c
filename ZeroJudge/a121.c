#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int prime[10000000] = {};
void wh(int n,int f)
{
    int pt = n / 10;
    int lt = pow(10,(n % 10)-1);
    prime[pt]=((prime[pt]/(lt*10))*(lt*10))+(f*lt)+(prime[pt]%lt);
}
int rd(int n)
{
    return ((prime[n / 10] / (int)pow(10,(n % 10)-1))) % 10;
}
int main(void)
{
    wh(6235014, 2);
    wh(6235018, 1);
    //wh(6235010, 8);
    printf("%d\n", prime[623501]);
    printf("%d\n%d\n%d\n", rd(6235014),rd(6235011),rd(6235018));
    /*int a = 0, b = 0;
    prime[1] = 1;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        for (int i = 2; i <= sqrt(b) + 1; i++)
        {
            if ((rd(i) == 1)||(rd(i)==2))
                continue;
            wh(i, 2);
            for (int j = 2; j <= b / i; j++)
            {
                wh(i * j,1);
            }
        }
        int sum = 0;
        for (int i = a; i <= b; i++)
        {
            if (rd(i) == 2)
            {
                sum++;
            }
        }
        printf("%d\n", sum);
    }*/
}