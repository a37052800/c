#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight, IPP;
    
    scanf("%d%d%d%d", &height, &length, &width, &IPP);
    volume = height * length * width;
    weight = volume / IPP;
    if (volume % IPP > 0)
        weight++;
    printf("%d", weight);

    return 0;
}