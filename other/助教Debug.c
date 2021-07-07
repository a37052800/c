#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int number;
    int age;
    char name[10];
    struct Student *next;
};
int main()
{
    int N;
    struct Student *head, *temp, *previous;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        struct Student *temp = (struct Student *)malloc(sizeof(struct Student));
        scanf("%d", &(temp->number));
        scanf("%s", &(temp->name));
        scanf("%d", &(temp->age));
        if (i == 0)
        {
            head = temp;
            previous = temp;
        }
        else
        {
            previous->next = temp;
            head->next = previous;
        }
        temp->next = NULL;
        previous = temp;
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d %s %d", temp->number, temp->name, temp->age);
        printf("\n");
        temp = temp->next;
    }
}