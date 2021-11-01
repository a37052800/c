#include <stdio.h>
int main()
{
    printf("Enter a 24-hour time: ");
    int hour, minute;
    scanf("%d:%d", &hour, &minute);
    if ((hour > 24) || (hour < 0) || (minute > 59) || (minute < 0) || ((hour == 24) && (minute > 0)))
    {
        printf("Not the correct time format");
        return 0;
    }
    char sig[] = "AM";
    if (hour > 12)
    {
        hour -= 12;
        sig[0] = 'P';
    }
    else if ((hour == 12) && (minute > 0))
        sig[0] = 'P';
    if (hour == 0)
        hour += 12;
    printf("Equivalent 12-hour time: %d:%02d %s", hour, minute, sig);
}