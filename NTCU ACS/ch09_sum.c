#include <stdio.h>
int sum(int n, int *arr);
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", sum(n, arr));
}
int sum(int n, int *arr)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}