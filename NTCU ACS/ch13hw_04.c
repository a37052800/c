#include <stdio.h>
#include <string.h>
int main()
{
    int note_day[64];
    char notes[64][512];
    int count = 0;
    while (scanf("%d", &note_day[count]))
    {
        if (note_day[count] == 0)
            break;
        scanf("%[^\n]", notes[count]);
        fflush(stdin);
        count++;
    }
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (note_day[i] > note_day[j])
            {
                int temp = note_day[i];
                char ctemp[512];
                strcpy(ctemp,notes[i]);
                note_day[i] = note_day[j];
                strcpy(notes[i],notes[j]);
                note_day[j] = temp;
                strcpy(notes[j],ctemp);
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d%s\n",note_day[i],notes[i]);
    }
}
/*
24 Susan's birthday
6 6:00 - Dinner with Marge and Russ
26 Movie - "Chinatown"
7 10:30 - Dental appointment
13 Movie - "Dazed and Confused"
5 Saturday class
12 Saturday class
0
*/