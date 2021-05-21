#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int rem(int m[], int len, int x) //(陣列m,m的長度,要除的數)
{
    int t[len];
    for (int i = 0; i < len; i++) //傳過來的是指標 所以快取一次
    {
        t[i] = m[i];
    }
    for (int i = 0; i < len; i++) //大數-求餘數
    {
        if (t[i] < x)
        {
            if (i == len - 1)
            {
                return t[i]; //回傳餘數
            }
            t[i + 1] = t[i] * 10 + t[i + 1];
            t[i] = 0;
        }
        else
        {
            t[i] = t[i] % x;
            i--;
        }
    }
}
int main()
{
    int n, m[1001];
    scanf("%d\n", &n);
    for (int nt = 0; nt < n; nt++)
    {
        int len, sn;
        for (len = 0; len < 1001; len++)
        {
            char t;
            t = getchar();
            if (t != '\n')
            {
                m[len] = t - '0';
            }
            else
            {
                break;
            }
        }
        scanf("%d", &sn);
        int s[sn];
        for (int i = 0; i < sn; i++)
        {
            scanf("%d", &s[i]);
        }
        int sit = 0;
        for (int i = 0; i < sn; i++)
        {
            if (rem(m, len, s[i]) != 0) //將m分別除以每個s
            {
                sit = 1;
                break;
            }
        }
        if (sit == 0) //整除
        {
            for (int i = 0; i < len; i++)
            {
                printf("%d", m[i]);
            }
            printf(" - Wonderful.\n");
        }
        else //不整除
        {
            for (int i = 0; i < len; i++)
            {
                printf("%d", m[i]);
            }
            printf(" - Simple.\n");
        }
        getchar(); //eat enter
    }
}