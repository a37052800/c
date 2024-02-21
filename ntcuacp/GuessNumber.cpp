#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
    srand((unsigned)time(0));
    int i = rand() % 1000;
    int n;
    cout << "have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.\n";
    while (cin >> n)
    {
        cin.ignore();
        if (n == i)
        {
            cout << "Excellent! You guessed the number!\nWould you like to play again (y/N)? ";
            char t = cin.get();
            if (t == 'y' || t == 'Y')
            {
                i = rand() % 1000;
                cout << "have a number between 1 and 1000.\nCan you guess my number?\nPtease type your first guess.\n";
                continue;
            }
            else
                break;
        }
        if (n > i)
            cout << "Too high ,Try again.\n";
        else
            cout << "Too low ,Try again.\n";
    }
}