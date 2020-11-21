#include <stdio.h>
#include <stdlib.h>
int factor(int x);
int main(void)
{
    int n = 0, i = 2, temp = 0; //n=Times i=1stInt
    printf("key in n ");
    scanf("%d", &n);
    while (temp < n)
    {
        int t = factor(i);                           //因為factor(i)接下來要用3次所以先存起來較省時
        if ((i == factor(t)) && (t > i) && (t != i)) //(求兩次因樹和看是否相等&限制大小排序避免重複&&ex.6)
        {
            printf("(%d,%d)", i, t);
            temp++;
            i++;
        }
        else
        {
            i++;
        }
    }
}
int factor(int x) //求出x的因數和
{
    int c = 0;
    for (int i = 1; i < x/i; i++)
    {
        if ((x % i) == 0)
            c += i;
    }
    return c; //x的因數和
}