#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int l = 0; l < n; l++)
	{
		int ai, aj;
		cin >> ai >> aj;
		int a[ai][aj];
		for (int i = 0; i < ai; i++)
		{
			for (int j = 0; j < aj; j++)
			{
				cin >> a[i][j];
			}
		}
		for (int k = 0; k < aj - 1; k++)
		{
			for (int i = 0 + 1, j = k + 1; i < ai && j < aj; i++, j++)
			{
				if (a[i][j] != a[i - 1][j - 1])
				{
					cout << "No" << endl;
					goto ENDCC;
				}
			}
		}
		for (int k = 1; k < ai - 1; k++)
		{
			for (int i = k + 1, j = 0 + 1; i < ai && j < aj; i++, j++)
			{
				if (a[i][j] != a[i - 1][j - 1])
				{
					cout << "No" << endl;
					goto ENDCC;
				}
			}
		}
		cout << "Yes" << endl;
	ENDCC:;
	}
}
