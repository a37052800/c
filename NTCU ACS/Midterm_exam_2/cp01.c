#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char str[256];
    scanf("%[^\n]", str);
    for (int i = 0; i < strlen(str); i++)
    {
        char ch = toupper(str[i]);
        switch (ch)
        {
        case 'A':
            printf("%c", '4');
            break;
        case 'B':
            printf("%c", '8');
            break;
        case 'E':
            printf("%c", '3');
            break;
        case 'I':
            printf("%c", '1');
            break;
        case 'O':
            printf("%c", '0');
            break;
        case 'S':
            printf("%c", '5');
            break;
        default:
            printf("%c", ch);
            break;
        }
    }
    printf("%s", "!!!!!!!!!!");
}