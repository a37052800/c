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
    for (auto t : ss)
    {
        cout<<t;
    }
    cout << s;
}