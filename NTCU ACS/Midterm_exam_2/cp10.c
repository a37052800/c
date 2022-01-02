#include <stdio.h>
void printarr(int arr[], int n)
{
    int min1 = __INT_MAX__, min2 = __INT_MAX__, max1 = 0, max2 = 0;
    for (int i = 0; i < n; i++)
    {
        if ((*(arr + i)) < min1)
        {
            min2 = min1;
            min1 = *(arr + i);
        }
        if ((*(arr + i)) > max1)
        {
            max2 = max1;
            max1 = *(arr + i);
        }
    }
    printf("%d %d %d %d", max1, max2, min2, min1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printarr(arr, n);
}