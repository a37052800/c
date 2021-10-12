#include <stdio.h>
int main(void)
{
    int p1, p2, p3;
    scanf("(%d) %d-%d", &p1, &p2, &p3);
    printf("You entered %02d.%04d.%04d", p1, p2, p3);
}