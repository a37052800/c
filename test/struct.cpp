#include <iostream>
using namespace std;

typedef struct test
{
    int a;
    int b;
    char c;
    test print()
    {
        cout << a << b << c << '\n';
    }
} test;

test *func()
{
    test *t = new test;
    t->a = 3;
    t->b = 4;
    t->c = 'b';
}

int main()
{
    test *t = func();
    t->print();
}