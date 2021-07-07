#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char now = '0';
    int dir = 0, x = 0, y = 0, tx = 0, ty = 0;
    scanf("%d %d", &x, &y);
    int ter[101][101];
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            ter[i][j] = 0; //initialize
    while (scanf("%d %d %s", &tx, &ty, &now) != EOF)
    {
        char trash[2]; //eat the first enter
        switch (now)   //the first direction
        {
        case 'N':
            dir = 0;
            break;
        case 'S':
            dir = 2;
            break;
        case 'W':
            dir = 3;
            break;
        case 'E':
            dir = 1;
            break;
        }
        char move[100];                     //the command of moving
        int sit = 0;                        //lost or not
        fgets(trash, sizeof(trash), stdin); // safe input to eat enter
        fgets(move, sizeof(move), stdin);   // safe input to get command into move
        int i = 0;
        for (i = 0; i < strlen(move) && sit != 1; i++) //start to move
        {
            switch (move[i])
            {
            case 'L': //turn left
                dir -= 1;
                if (dir == -1)
                    dir = 3;
                break;
            case 'R': //turn right
                dir += 1;
                if (dir == 4)
                    dir = 0;
                break;
            case 'F':        //move forward
                switch (dir) //find the current direction
                {
                case 0:
                    ty += 1;
                    if (ty > y)
                    {
                        ty--;
                        if (ter[tx][ty] == 0)
                        {
                            sit = 1;
                            ter[tx][ty] = 1;
                            if (dir == 0)
                                now = 'N';
                            else if (dir == 1)
                                now = 'E';
                            else if (dir == 2)
                                now = 'S';
                            else if (dir == 3)
                                now = 'W';
                            printf("%d %d %c LOST\n", tx, ty, now);
                        }
                    }
                    break;
                case 1:
                    tx += 1;
                    if (tx > x)
                    {
                        tx--;
                        if (ter[tx][ty] == 0)
                        {
                            sit = 1;
                            ter[tx][ty] = 1;
                            if (dir == 0)
                                now = 'N';
                            else if (dir == 1)
                                now = 'E';
                            else if (dir == 2)
                                now = 'S';
                            else if (dir == 3)
                                now = 'W';
                            printf("%d %d %c LOST\n", tx, ty, now);
                        }
                    }
                    break;
                case 2:
                    ty--;
                    if (ty < 0)
                    {
                        ty++;
                        if (ter[tx][ty] == 0)
                        {
                            sit = 1;
                            ter[tx][ty] = 1;
                            if (dir == 0)
                                now = 'N';
                            else if (dir == 1)
                                now = 'E';
                            else if (dir == 2)
                                now = 'S';
                            else if (dir == 3)
                                now = 'W';
                            printf("%d %d %c LOST\n", tx, ty, now);
                        }
                    }
                    break;
                case 3:
                    tx--;
                    if (tx < 0)
                    {
                        tx++;
                        if (ter[tx][ty] == 0)
                        {
                            sit = 1;
                            ter[tx][ty] = 1;
                            if (dir == 0)
                                now = 'N';
                            else if (dir == 1)
                                now = 'E';
                            else if (dir == 2)
                                now = 'S';
                            else if (dir == 3)
                                now = 'W';
                            printf("%d %d %c LOST\n", tx, ty, now);
                        }
                    }
                    break;
                default:
                    break;
                }
                break;
            }
            if (sit == 0 && i == strlen(move) - 1)
            {
                if (dir == 0)
                    now = 'N';
                else if (dir == 1)
                    now = 'E';
                else if (dir == 2)
                    now = 'S';
                else if (dir == 3)
                    now = 'W';
                printf("%d %d %c\n", tx, ty, now);
            }
        }
    }
}
