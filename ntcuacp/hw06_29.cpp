#include <iostream>
#include <cmath>

bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int count = 0;

    for (int i = 2; i <= 10000; i++)
    {
        if (isPrime(i))
        {
            std::cout << '\t' << i;
            count++;
            if (count % 10 == 0)
                std::cout << std::endl;
        }
    }

    std::cout << "\nTotal of " << count << " prime numbers between 1 and 10000." << std::endl;

    return 0;
}