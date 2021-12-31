#include <ctime>
#include <iostream>
long long int fib(int n)
{
    long long int f[1000];
    f[0] = 1;
    if (n > 0)
    {
        f[1] = 1;
        for (int i = 2; i < n; i++)
            f[i] = f[i - 1] + f[i - 2];
    }
    return f[n-1];
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