#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter an expression (example: 1+2.5*3): ");
    char temp[256];
    double a, b, ans = 0;
    char ch, nextch;
    scanf("%lf%c%[^\n]", &a, &ch, temp);
    while ((strchr(temp, '+') != NULL) || (strchr(temp, '-') != NULL) || (strchr(temp, '*') != NULL) || (strchr(temp, '/') != NULL))
    {
        sscanf(temp, "%lf%c%[^\n]", &b, &nextch, temp);
        switch (ch)
        {
        case '+':
            a = a + b;
            break;
        case '-':
            a = a - b;
            break;
        case '*':
            a = a * b;
            break;
        case '/':
            a = a / b;
            break;
        }
        ch = nextch;
    }
    sscanf(temp, "%lf", &b);
    switch (ch)
    {
    case '+':
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case '*':
        ans = a * b;
        break;
    case '/':
        ans = a / b;
        break;
    }
    printf("Value of expression: %.1lf", ans);
}