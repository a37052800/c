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
        fgets(notes[count],512,stdin);
        //scanf("%[^\r\n]", notes[count]); oop用這個會讀不到？？
        //fflush(stdin);  //把留下來的'\n'清空
        count++;
    }
    for (int i = 0; i < count - 1; i++)  //排序
    {
        for (int j = i + 1; j < count; j++)
        {
            if (note_day[i] > note_day[j])
            {
                int temp = note_day[i];
                char ctemp[512];
                strcpy(ctemp, notes[i]);  //字串複製strcpy(目標字串位置,來源字串位置)
                note_day[i] = note_day[j];
                strcpy(notes[i], notes[j]);
                note_day[j] = temp;
                strcpy(notes[j], ctemp);
            }
        }
    }
    for (int i = 0; i < count; i++)
        printf("%2d%s", note_day[i], notes[i]);
}