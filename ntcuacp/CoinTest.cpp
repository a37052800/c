#include <iostream>
#include "Coin.h"
using namespace std;
int main(int argc, char const *argv[])
{
    int heads = 0, tails = 0;
    Coin coin{};
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (coin.Tossing())
            {
                heads++;
                cout << "Heads"
                     << " ";
            }
            else
            {
                tails++;
                cout << "Tails"
                     << " ";
            }
        }
        cout << '\n';
    }
    cout << "The total number of heads was " << heads << '\n'
         << "The total number of tails was " << tails << '\n';
    return 0;
}
