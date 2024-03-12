#include <iostream>
using namespace std;
int main()
{
    cout << "Face length\tSurface area\tVolume" << endl;
    cout << "of cube(cm)\tof cube(cm^2)\tof cube(cm^3)" << endl;
    for (int i = 0; i <= 10; i++)
    {
        cout << i << "\t\t" << i * i * 6 << "\t\t" << i * i * i << endl;
    }
}