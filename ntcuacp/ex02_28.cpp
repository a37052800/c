#include <iostream>
using namespace std;
int main()
{
    int num{0};
    cout << "Enter a five-digit integer: ";
    cin >> num;
    cout << num / 10000 << "   " << (num % 10000) / 1000 << "   " << (num % 1000) / 100 << "   " << (num % 100) / 10 << "   " << num % 10 << endl;
    return 0;
}
