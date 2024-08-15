#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<string> test{"Hello", "World"};
    cout << test[0] << " " << test[1] << endl;
    test.clear();
    cout << test.size() << endl;
    for (string x:test){
        cout << x << endl;
    }
    // cout << test[0] << " " << test[1] << endl;
    return 0;
}
