#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size = 1;
    int *arr = calloc(size, sizeof(int));
    for (int i = 0; i < 100;i++)
    {
        arr[i] = i;
        arr = realloc(arr, sizeof(int)*(size+1));
        size++;
    }
    for (int i = 0; i < 100;i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
}