#include <ctime>
#include <iostream>
long long int fib(int n)
{
    if (n <= 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    std::cin >> n;
    clock_t start, end;
    start = clock();
    std::cout << fib(n);
    end = clock();
    double sec = (double)(end - start) / CLOCKS_PER_SEC;
    std::cout << std::endl
              << "time used " << sec << " sec.";
}