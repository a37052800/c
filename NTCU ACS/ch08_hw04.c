#include <stdio.h>
#include <string.h>
int main()
{
    char str[255];
    printf("Enter message to be encrypted: ");
    scanf("%[^\n]", str);
    int amount;
    printf("Enter shift amount (1-25): ");
    scanf("%d", &amount);
    printf("Encrypted message: ");
    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] >= 'A') && (str[i] <= 'Z'))
            str[i] = (str[i] - 'A' + amount) % 26 + 'A';
        if ((str[i] >= 'a') && (str[i] <= 'z'))
            str[i] = (str[i] - 'a' + amount) % 26 + 'a';
        printf("%c", str[i]);
    }
}