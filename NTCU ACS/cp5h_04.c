#include <stdio.h>
int main()
{
    printf("Enter wind speed (knots): ");
    int speed;
    scanf("%d", &speed);
    printf("Wind force at %d knots is ", speed);
    if (speed > 63)
        printf("Hurricane");
    else if (speed > 47)
        printf("Storm");
    else if (speed > 27)
        printf("Gale");
    else if (speed > 3)
        printf("Breeze");
    else if (speed > 0)
        printf("Light air");
    else
        printf("Calm");
}