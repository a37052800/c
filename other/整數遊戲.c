#include <stdio.h>
#include <string.h>
int main(void)
{
    int T;
    char N[1000];
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        int total = 0, t2[100] = {0};
        scanf("%s", &N);
        for (int j = 0; j < strlen(N); j++)
        {
            total = total + (N[j] - '0');
            t2[j] = (N[j] - '0');
        }
        if (strlen(N) == 1)
        {
            printf("Case %d: S", i);
            if (i < T)
                printf("\n");
            continue;
        }
        int s = 0;
        for (int k = 0; k < strlen(N); k++)
        {
            for (int h = 0; h < strlen(N); h++)
            {
                if (((total - (N[h] - '0')) % 3 == 0) && N[h] != '0')
                {
                    s++;
                    total = total - (N[h] - '0');
                    N[h] = '0';
                    continue;
                }
            }
        }
        printf("%d\n", s);
        if (s % 2 == 0)
            printf("Case %d: T", i);
        else
            printf("Case %d: S", i);
        if (i < T)
            printf("\n");
    }
}