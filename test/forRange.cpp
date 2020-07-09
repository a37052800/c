#include <iostream>
using namespace std;
int main()
{
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int t : a)  // or use for (auto t : a)
    {
        cout << t << endl;
    }
    string s = "12345";
    for(char c : s)
    {
        cout << c << endl;
    }
}