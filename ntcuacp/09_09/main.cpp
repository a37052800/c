#include <iostream>
#include "9_9.h"
using namespace std;
int main(int argc, char const *argv[])
{
    Student student{Name{"CI TING", "", "LIAO", "Mr."}, 'M', Date{1, 1, 2001}, "ASC109123", "a37052800@gmail.com"};
    cout << student.getName() << '\n'
         << student.getDateOfBirth() << '\n'
         << student.getSex() << '\n'
         << student.getRegNumber() << '\n'
         << student.getEmail() << '\n';
}
