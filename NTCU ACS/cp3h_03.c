#include <stdio.h>
int main()
{
    int m[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%2d", m[i][j]);
            if (j < 3)
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    printf("Row sums: ");
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += m[i][j];
        }
        printf("%d", sum);
        if (i < 3)
            printf(" ");
    }
    printf("\n");
    printf("Column sums: ");
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += m[j][i];
        }
        printf("%d", sum);
        if (i < 3)
            printf(" ");
    }
    printf("\n");
    printf("Diagonal sums: ");
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += m[i][i];
    }
    printf("%d ", sum);
    sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += m[3-i][i];
    }
    printf("%d", sum);
}