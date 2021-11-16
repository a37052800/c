#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter a sentence: ");
    int chnum = 0, wordnum = 1;
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if (ch != ' ')
            chnum++;
        if (ch == ' ')
            wordnum++;
    }
    printf("Characters: %d\n", chnum);
    printf("Words: %d\n", wordnum);
    printf("Average word length: %.1lf", (double)chnum / wordnum);
}