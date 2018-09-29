#include <iostream>
using namespace std;
int main()
{
	int a[11], i, r[9][9], j;
	for (i=0;i<9;i++) for (j=0;j<9;j++) r[i][j]=0;
	for (i = 1; i <= 10; i++)
		cin >> a[i];
	for (i = 1; i <= 10; i++)
		r[a[i] / 10][a[i] % 10] = 1;
		for (i = 1; i <= 8; i++)
		{
			for (j = 1; j <= 8; j++)
				if (r[j][i] == 1)
					cout << j * 10 + i << " ";
		}
	return 0;
}
