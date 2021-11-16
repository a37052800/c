#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter a first and last name: ");
    char first;
    first = getchar();
    while (first == ' ')
        first = getchar();
    char last[256];
    while(scanf("%s",last)!=EOF)
        ;
    printf("%s, %c.", last, first);
}