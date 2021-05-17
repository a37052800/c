#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char now = '0';
    int dir = 0, x = 0, y = 0, x0 = 0, y0 = 0;
    scanf("%d", &x);
    scanf("%d", &y);
    int ter[101][101];
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            ter[i][j] = 0; //initialize
    while (scanf("%d %d %c ", &x0, &y0, &now) != EOF)
    {                
        
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
		char move[100];						//the command of moving
		int sit = 0;						//lost or not
        
		fgets(move, sizeof(move), stdin);	// safe input to get command into move
        
        
		for (int i = 0; i < strlen(move) && sit != 1; i++) //start to move
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
			case 'F':		 //move forward
                switch (dir) //find the current direction
                {
                case 0:
                    y0 += 1;
                    if (y0 > y)
                    {
                        y0--;
                        if (ter[x0][y0] == 0)
                        {
                            sit = 1;
                            ter[x0][y0] = 1;
                            if (dir == 0)
                                now = 'N';
                            else if (dir == 1)
                                now = 'E';
                            else if (dir == 2)
                                now = 'S';
                            else if (dir == 3)
                                now = 'W';
                            printf("%d %d %c LOST\n", x0, y0, now);
                        }
                    }
                    break;
                case 1:
                    x0 += 1;
                    if (x0 > x)
                    {
                        x0--;
                        if (ter[x0][y0] == 0)
                        {
                            sit = 1;
                            ter[x0][y0] = 1;
                            if (dir == 0)
                                now = 'N';
                            else if (dir == 1)
                                now = 'E';
                            else if (dir == 2)
                                now = 'S';
                            else if (dir == 3)
                                now = 'W';
                            printf("%d %d %c LOST\n", x0, y0, now);
                        }
                    }
                    break;
                case 2:
                    y0--;
                    if (y0 < 0)
                    {
                        y0++;
                        if (ter[x0][y0] == 0)
                        {
                            sit = 1;
                            ter[x0][y0] = 1;
                            if (dir == 0)
                                now = 'N';
                            else if (dir == 1)
                                now = 'E';
                            else if (dir == 2)
                                now = 'S';
                            else if (dir == 3)
                                now = 'W';
                            printf("%d %d %c LOST\n", x0, y0, now);
                        }
                    }
                    break;
                case 3:
                    x0--;
                    if (x0 < 0)
                    {
                        x0++;
                        if (ter[x0][y0] == 0)
                        {
                            sit = 1;
                            ter[x0][y0] = 1;
                            if (dir == 0)
                                now = 'N';
                            else if (dir == 1)
                                now = 'E';
                            else if (dir == 2)
                                now = 'S';
                            else if (dir == 3)
                                now = 'W';
                            printf("%d %d %c LOST\n", x0, y0, now);
                        }
                    }
                    break;
                default:
                    break;
                }
                break;
            }
            if (sit == 1)
            {
                break;
            }
        }
        if (sit == 0)
        {
            if (dir == 0)
                now = 'N';
            else if (dir == 1)
                now = 'E';
            else if (dir == 2)
                now = 'S';
            else if (dir == 3)
                now = 'W';
            printf("%d %d %c\n", x0, y0, now);
        }
    }
    return 0;
}
