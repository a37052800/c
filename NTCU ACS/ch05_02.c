#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'A':
        printf("Apple");
        break;
    case 'b':
    case 'B':
        printf("Banana");
        break;
    case 'c':
    case 'C':
        printf("Cherry");
        break;
    case 'd':
    case 'D':
        printf("Durian");
        break;
    case 'e':
    case 'E':
        printf("Egg");
        break;
    case 'f':
    case 'F':
        printf("Fish");
        break;
    default:
        printf("Error");
        break;
    }
}