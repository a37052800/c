#include <iostream>
#include <cmath>

bool isDudeney(int number)
{
    int sum = 0;
    int temp = number * number * number;

    while (temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    return sum == number;
}

int main()
{
    int count = 0;

    std::cout << "All 7 Dudeney numbers:\n";

    for (int i = 0; count < 7; i++)
    {
        if (isDudeney(i))
        {
            std::cout << i * i * i << '\n';
            count++;
        }
    }

    std::cout << std::endl;

    return 0;
}