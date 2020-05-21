#include <iostream>
using namespace std;
int search(int &a[], int s, int u, int d, char f);
int main()
{
	int n, q;
	cin >> n >> q;
	int a[n], l[q], r[q];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < q; i++)
		cin >> l[i] >> r[i];
}
int search(int &a[], int s, int u, int d, char f)
{
	int m = (u + d) / 2;
	if (f == 'D')
	{
		if (u == d)
			return u;
		if (a[m] <= s)
			search(a[], s, u, m, f);
		if (a[m] >= s)
			search(a[], s, m, d, f);
	}
}
