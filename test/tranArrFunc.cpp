#include <iostream>
using namespace std;
void testArr(int &a)
{
	for (int i = 0; i < 4; i++)
		cout << *(&a + i);
	a += 1;
}
int main()
{
	int ar[4] = {5, 1, 8, 3};
	testArr(ar[0]);
	cout << endl;
	for (int i = 0; i < 4; i++)
		cout << ar[i];
}
