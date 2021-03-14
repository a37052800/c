#include <ctime>
#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));
    rand();
    cout << rand()%10;
}