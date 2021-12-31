#include <stdio.h>
#include <string.h>
int main()
{
    char strarr[256][256];
    int i;
    for (i = 0; scanf("%s", strarr[i]) != EOF; i++)
        ;
    i--;
    char lasttemp[256];
    memcpy(lasttemp, strarr[i], strlen(strarr[i]) - 1);
    printf("%s ", lasttemp);
    for (int j = i - 1; j >= 0; j--)
        if (j > 0)
            printf("%s ", strarr[j]);
        else
            printf("%s", strarr[j]);
    printf("%c", strarr[i][strlen(strarr[i]) - 1]);
}