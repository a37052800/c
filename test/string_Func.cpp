#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "abcdefg";
    s.insert(1, "ABC");
    cout << s;
    s[2] = '@';
    cout << s;
}