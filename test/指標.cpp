#include <iostream>
using namespace std;
int main()
{
    int i = 666;
    int *qi = &i;
    cout << i << endl;
    *qi = 999;
    cout << i << endl;
    ////////////////
    int ar[3] = {1, 2, 3};
    for (int i = 0; i < 3;i++)
    {
        cout << ar[i]<< endl;
    }
    int *qar = ar;
    *qar += 2;
    for (int i = 0; i < 3;i++)
    {
        cout << ar[i]<< endl;
    }
    return 0;
}
