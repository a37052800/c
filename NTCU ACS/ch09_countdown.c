#include <stdio.h>
void countdown(int n);
int main()
{
    int n;
    scanf("%d", &n);
    countdown(n);
}
void countdown(int n)
{
    for (int i = n; i >= 0; i--)
    {
        printf("%d", i);
        if(i>0)
            printf("\n");
    }
}