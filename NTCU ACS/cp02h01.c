#include <stdio.h>
#define PI 3.14159
int main()
{
    float radius;
    scanf("%f", &radius);
    printf("%.2f", (4.0 / 3.0 * PI * radius * radius * radius) + 0.004);
}