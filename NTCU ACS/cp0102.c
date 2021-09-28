#include<stdio.h>
int main(void)
{
    for (int i = 1; i <= 7;i+=2)
    {
        for (int j = 0; j < 9-i;j+=2)
        {
            printf(" ");
        }
        for (int j = 0; j < i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 5; i <= 9;i+=2)
    {
        for (int j = 0; j < 9-i;j+=2)
        {
            printf(" ");
        }
        for (int j = 0; j < i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 2;i++)
    {
        printf("    *\n");
    }
}