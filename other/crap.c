#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int x = 0, y = 0, win[2], counter = 0, sum = 0, crap[1000] = {0}, die;
	float average = 0;
	srand(time(NULL));
	win[0] = 0;
	win[1] = 0;
	while (counter <= 1000)
	{

		crap[counter] += 1;
		x = 1 + (rand() % 6);
		y = 1 + (rand() % 6);
		sum = x + y;
		if (((x + y) == 7) || ((x + y) == 11))
		{
			if (counter < 20)
			{
				win[0] += 1;
				printf("%d   %d\n", win[0], win[1]);
				printf("the %d time Win!\n", counter + 1);
			}
			counter += 1;
		}
		else if (((x + y) == 2) || ((x + y) == 3) || ((x + y) == 12))
		{
			if (counter < 20)
			{
				win[1] += 1;
				printf("%d   %d\n", win[0], win[1]);
				printf("the %d time Lose!\n", counter + 1);
			}
			counter += 1;
		}
		else
		{
			while (1)
			{
				crap[counter] += 1;
				x = 1 + (rand() % 6);
				y = 1 + (rand() % 6);
				die = x + y;

				if (die == 7)
				{
					if (counter < 20)
					{
						win[1] += 1;
						printf("%d   %d\n", win[0], win[1]);
						printf("the %d time Lose!\n", counter + 1);
					}
					counter += 1;
					break;
				}
				else if (sum == (die))
				{
					if (counter < 20)
					{
						win[0] += 1;
						printf("%d   %d\n", win[0], win[1]);
						printf("the %d time Win!\n", counter + 1);
					}
					counter += 1;
					break;
				}
			}
		}
	}
	printf("前二十次贏%d次  輸%d次\n", win[0], win[1]);
	for (int i = 0; i < 1000; ++i)
	{
		average += crap[i];
	}
	average = average / 1000;
	printf("Average is %.2f times", average);
}
