#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int D = b * b - 4 * a * c;
    if(D<0)
    {
        cout << "No real root";
    }
    else if(D==0)
    {
        cout << "Two same roots x="<<(-b+sqrt(D))/(2*a);
    }
    else
    {
        cout << "Two different roots x1="<<(-b+sqrt(D))/(2*a)<<" , x2="<<(-b-sqrt(D))/(2*a);
    }
}
