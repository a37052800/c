#include <iostream>
#include <vector>
#include <string>
using namespace std;
class testClass
{
private:
    string a;

public:
    // testClass(string);
    void putString(string);
    void print();
};

// testClass::testClass(string input)
// {
//     putString(input);
// }
void testClass::putString(string input)
{
    this->a = input;
}
void testClass::print()
{
    cout << this->a;
}

int main(int argc, char const *argv[])
{
    vector<testClass> test;
    test.resize(100);
    for (int i = 0; i < 100; i++)
    {
        test[i].putString("Hello" + to_string(i));
        test[i].print();
    }
    return 0;
}
