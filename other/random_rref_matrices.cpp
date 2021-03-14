#include <ctime>
#include <iostream>
using namespace std;
int main()
{
    double m[3][3];
    srand(time(NULL));
    rand();
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m[i][j] = rand();
        }
    }
    for (int i = 2; i > 0; i--)
    {
        m[0][i] = m[0][i] / m[0][0];
    }
    m[0][0] = 1;
    
}