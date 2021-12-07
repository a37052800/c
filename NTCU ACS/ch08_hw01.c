#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char str[256];
    printf("Enter message: ");
    scanf("%[^\n]", str);
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = toupper(str[i]);
        switch (str[i])
        {
        case 'A':
            str[i] = '4';
            break;
        case 'B':
            str[i] = '8';
            break;
        case 'E':
            str[i] = '3';
            break;
        case 'I':
            str[i] = '1';
            break;
        case 'O':
            str[i] = '0';
            break;
        case 'S':
            str[i] = '5';
            break;
        }
    }
    printf("In B1FF-speak: %s!!!!!!!!!!", str);
}