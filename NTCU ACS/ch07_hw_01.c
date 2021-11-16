#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter phone number: ");
    char keyin[256];
    scanf("%s", keyin);
    for (int i = 0; i < strlen(keyin);i++)
    {
        switch(keyin[i])
        {
            case 'A':
            case 'B':
            case 'C':
                keyin[i] = '2';
                break;
            case 'D':
            case 'E':
            case 'F':
                keyin[i] = '3';
                break;
            case 'G':
            case 'H':
            case 'I':
                keyin[i] = '4';
                break;
            case 'J':
            case 'K':
            case 'L':
                keyin[i] = '5';
                break;
            case 'M':
            case 'N':
            case 'O':
                keyin[i] = '6';
                break;
            case 'P':
            case 'R':
            case 'S':
                keyin[i] = '7';
                break;
            case 'T':
            case 'U':
            case 'V':
                keyin[i] = '8';
                break;
            case 'W':
            case 'X':
            case 'Y':
                keyin[i] = '9';
                break;
        }
    }
    printf("%s", keyin);
}