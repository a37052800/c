#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char a[100][100];
    int line = 0, max = 0;
    while (gets(a[line]))
    {
        if (strlen(a[line])>max)
            max = strlen(a[line]);
        line++;
    }
    for (int i = 0; i < max; i++)
    {
        for (int j = line - 1; j >= 0; j--)
        {
            if (i >= strlen(a[j]))
                printf(" ");
            else
                printf("%c", a[j][i]);
        }
        printf("\n");
    }
}