#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    long int k = 2147483647;
    for (long int i = 2; i < sqrt(k); i++)
    {
        if (k % i == 0)
        {
            cout << "no";
            break;
        }
    }
    cout << "yes";
}
