#include <stdio.h>
int main()
{
    int day, week;
    scanf("%d%d", &day, &week);
    for (int i = 1; i < week; i++)
    {
        printf("   ");
    }
    for (int i = 1; i <= day; i++)
    {
        if (week > 7)
        {
            printf("\n");
            week = 1;
        }
        printf("%2d", i);
        if(week != 7)
            printf(" ");
        week++;
    }
}