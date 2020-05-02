#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    char str0='1';
	string str1 = "4532";
    string str2 = "3.14159";
    string str3 = "31337 with words";
    string str4 = "words and 2";
    str1.erase(0,1);
    cout<<atol(str1);
    if(str1[1]) cout<<"f";
 
}
