#include <iostream>
using namespace std;
int main()
{
    while (1)
    {
        long long int low, high;
        cin >> low >> high;
        if ((low == 0) && (high == 0))
            return 0;
        cout << high / 5 - low / 5 + 1 << endl;
    }
}