#include <stdio.h>
int arr_sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int t = n;
    while (t--)
    {
        scanf("%d", &arr[t]);
    }
    printf("%d", arr_sum(arr, n));
}