#include <iostream>
#include <sstream>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << "\n";
    }
    stringstream ss;
    ss.str("my name = tim");
    string a;
    ss>>a;
    cout<<a<<'\n';
    cout<<ss.;
    return 0;
}
