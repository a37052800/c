#include <stdio.h>
#include <string.h>
int main()
{
    int temp[26];
    memset(temp, 0, sizeof(temp));
    printf("Enter first word:");
    char ch = getchar();
    while (ch != '\n')
    {
        temp[ch - 'a']++;
        ch = getchar();
    }
    printf("Enter second word:");
    ch = getchar();
    while (ch != EOF)
    {
        temp[ch - 'a']--;
        ch = getchar();
    }
    for (int i = 0; i < 26;i++)
    {
        if(temp[i]!=0)
        {
            printf("The words are not anagrams.");
            return 0;
        }
    }
    printf("The words are anagrams.");
}