#include <stdio.h>
int main(void)
{
    int item, purchaseDataM, purchaseDataD, purchaseDataY;
    float unitPrice;
    scanf("%d", &item);
    scanf("%f", &unitPrice);
    scanf("%d/%d/%d", &purchaseDataM, &purchaseDataD, &purchaseDataY);
    printf("Item            Unit            Purchase\n");
    printf("                Price           Date\n");
    printf("%d             $%.2f        %02d/%02d/%04d", item, unitPrice, purchaseDataM, purchaseDataD, purchaseDataY);
}