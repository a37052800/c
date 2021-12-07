#include <stdio.h>
#include <string.h>
int main()
{
    char arr[255][255];
    int c = 0;
    while (scanf("%s", arr[c]) != EOF)
    {
        c++;
    }
    c--;
    char sim = arr[c][strlen(arr[c]) - 1];
    arr[c][strlen(arr[c]) - 1] = '\0';
    for (int i = c; i >= 0; i--)
    {
        printf("%s", arr[i]);
        if (i > 0)
            printf(" ");
    }
    printf("%c", sim);
}