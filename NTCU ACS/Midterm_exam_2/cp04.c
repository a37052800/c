#include <stdio.h>
#include <string.h>
int main()
{
    char str[256];
    scanf("%[^\n]", str);
    int shift;
    scanf("%d", &shift);
    for (int i = 0; i < strlen(str); i++)
    {
        if (((str[i] >= 'a') && (str[i] < 'z')) || ((str[i] >= 'A') && (str[i]) <= 'Z'))
            printf("%c", ((str[i] + shift - 'a') % 26) + 'a');
        else
            printf("%c", str[i]);
    }
}