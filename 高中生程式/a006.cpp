#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if((b*b-4*a*c)<0)
    {
        cout << "No real root";
    }
    else if((b*b-4*a*c)==0)
    {
        cout << "Two same roots x="<<(-b+pow(b*b-4*a*c,2))/(2*a);
    }
    else
    {
        cout << "Two different roots x1="<<(-b+pow(b*b-4*a*c,2))/(2*a)<<",x2="<<(-b-pow(b*b-4*a*c,2))/(2*a);
        
