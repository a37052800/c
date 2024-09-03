#include <string>
#include <sstream>
#include <locale>
#include <codecvt>
#include <iostream>
#include <fstream>

using namespace std;

int main( )
{
    const locale utf8_locale = locale(locale(), new codecvt_utf8<wchar_t>());
    ofstream out("test.txt");
    out.imbue(utf8_locale);
    string s = "Hello, 中文繁體!";
    cout<<"中文繁體"<<endl;
    out << s << endl;
    out.close();
    return 0;
}