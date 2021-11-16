#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter a 12-hour time (hours:minutes AM/PM): ");
    int hour, minute;
    char type[128];
    scanf("%d:%d%[^\n]", &hour, &minute, type);
    if (((strchr(type, 'p')) != NULL) || ((strchr(type, 'P')) != NULL))
        if (hour != 12)
            hour += 12;
    printf("Equivalent 24-hour time: %02d:%02d", hour, minute);
}