#include <conio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    char c;
    c = getch();
    while (int(c) != 13)
    {
        s += c;
        c = getch();
    }
    //getline(cin, s);
    /*while(cin.get()!='\n')
    {
        cin >> c;
    }*/
    cout << s.length();
}