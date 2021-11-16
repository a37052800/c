#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    printf("Enter a sentence: ");
    int sum = 0;
    char keyin[256];
    scanf("%[^\n]", keyin);
    for (int i = 0; i < strlen(keyin);i++)
    {
        switch(toupper(keyin[i]))
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                sum++;
                break;
        }
    }
    printf("Your sentence contains %d vowels.", sum);
}