#include <cmath>
class Coin
{
private:
public:
    Coin(){};
    bool Tossing();
};
bool Coin::Tossing()
{
    return rand() % 2;
}