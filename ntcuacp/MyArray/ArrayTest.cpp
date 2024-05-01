#include "Array.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    Array arr1{}, arr2{};
    arr1 = 1;
    arr2 = 2;
    arr1 = arr1 + arr2;
    cout << arr1;
    return 0;
}
