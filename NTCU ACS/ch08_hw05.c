#include <stdio.h>
#include <string.h>
int main()
{
    int chackdown[26], chackup[26];
    memset(chackdown, 0, sizeof(chackdown));
    memset(chackup, 0, sizeof(chackup));
    printf("Enter first word: ");
    char ch = getchar();
    while (ch != '\n')
    {
        if ((ch >= 'A') && (ch <= 'Z'))
            chackup[ch - 'A']++;
        if ((ch >= 'a') && (ch <= 'z'))
            chackdown[ch - 'a']++;
        ch = getchar();
    }
    printf("Enter second word: ");
    ch = getchar();
    while (ch != '\n')
    {
        if ((ch >= 'A') && (ch <= 'Z'))
            chackup[ch - 'A']--;
        if ((ch >= 'a') && (ch <= 'z'))
            chackdown[ch - 'a']--;
        ch = getchar();
    }
    for (int i = 0; i < 26; i++)
    {
        if ((chackdown[i] != 0) || (chackup[i] != 0))
        {
            printf("The words are not anagrams.");
            return 0;
        }
    }
    printf("The words are anagrams.");
}