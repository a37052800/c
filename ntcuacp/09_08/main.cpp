#include <iostream>
#include "9_8.h"
using namespace std;
int main(int argc, char const *argv[])
{
    Student student{"CI TING", "", "LIAO", 'M', 2001, "ASC109123", "a37052800@gmail.com"};
    cout << student.getFirsName() << '\n'
         << student.getSex() << '\n'
         << student.getRegNumber() << '\n'
         << student.getEmail() << '\n';
    return 0;
}
