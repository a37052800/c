#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    string s, a;
    stringstream ss;
    getline(cin, s);
    ss.clear();
    ss.str(s);
    s.clear();
    while (ss >> a)
    {
        cout << a << " ";
    }
    cout << s;
    ss.clear();
    ss.str("123 456");
    string test;
    ss >> test;
    cout << test << " ";
    ss >> test;
    cout << test << " ";
    if(ss >> test)
    cout << test << " ";

}