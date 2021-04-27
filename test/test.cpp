#include <iostream>
using namespace std;
class text
{
public:
    char a = NULL;
};
int main()
{
    text *t = new text;
    if (t->a != NULL)
    {
        cout << t->a;
    }
}