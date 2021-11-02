#include <stdio.h>
int main()
{
    printf("Enter the answer number(0-100):");
    int ans;
    scanf("%d", &ans);
    printf("\nGame start!\n\n");
    int up = 100, down = 0, temp;
    printf("\nEnter a number(%d-%d): ", down, up);
    scanf("%d", &temp);
    while (temp != ans)
    {

        if (temp < ans)
            down = temp;
        else
            up = temp;
        printf("\nEnter a number(%d-%d): ", down, up);
        scanf("%d", &temp);
    }
    printf("\nBANG!");
}