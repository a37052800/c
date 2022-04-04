#include <stdio.h>
int main()
{
    int ans, guess;
    scanf("%d", &ans);
    scanf("%d", &guess);
    while (guess != ans)
    {
        if ((guess >= 1) && (guess <= 1000))
        {
            if (guess > ans)
                printf("Too-high\n");
            else
                printf("Too-low\n");
        }
        else
            printf("x\n");
        scanf("%d", &guess);
    }
    printf("Success\n");
}