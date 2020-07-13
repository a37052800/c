#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    int a[10];
    fill(a, a + 10, 0);
    //memset(a, 0, sizeof(a));
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
    return 0;
}
