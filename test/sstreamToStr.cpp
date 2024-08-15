#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    stringstream ss;
    int a, b, c;
    float d;
    for (int i = 1; i < argc; i++)
    {
        ss << argv[i] << " ";
    }
    cout<<ss.str()<<endl;
    ss >> a >> b >> c >> d;
    cout << a << " || " << b << " || " << c << " || " << d << endl;
    return 0;
}

// int main()
// {
//     string s, a;
//     stringstream ss;
//     getline(cin, s);
//     ss.clear();
//     ss.str(s);
//     s.clear();
//     while (ss >> a)
//     {
//         cout << a << " ";
//     }
//     cout << s;
//     ss.clear();
//     ss.str("123 456");
//     string test;
//     ss >> test;
//     cout << test << " ";
//     ss >> test;
//     cout << test << " ";
//     if(ss >> test)
//     cout << test << " ";

// }