#include <iostream>
using namespace std;
void test1(int *p)
{
	cout << "Ft1 " << *p << endl;
}
void test(int &p)
{
	p++;
	cout << "Ft " << p << endl;
}
void test2(int *arrp)
{
	int *carrp = (int *)malloc(16 * sizeof(int));
	carrp = arrp;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << *arrp + i * 4 + j << "\t";
		}
		cout << endl;
	}
	*carrp = 2;
}
int main()
{
	int t = 20;
	cout << "main1 " << t << endl;
	test(t);
	test1(&t);
	cout << "main2 " << t << endl;
	int arr[4][4];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = (i + 1) * (j + 1);
		}
	}
	test2(&arr[0][0]);
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}