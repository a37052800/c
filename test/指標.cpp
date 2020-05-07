#include <iostream>
using namespace std;
int main()
{
    int i = 666;
    int *qi = &i;
    cout << i << endl;
    *qi = 999;
    cout << i << endl;
    //////////
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
    /*for (int i = 0;i<999999;i++)
    {
        for (int j = 0; j < 999999;j++)
        {
            for (int k = 0; k < 999999;k++)
            {
                double *p = new double(999999.9);
            }
        }
    }*/
    return 0;
}
