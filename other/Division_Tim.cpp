#include <iostream>
using namespace std;
int N, numerator, denominator, count, i, k;
bool has_solution, first = true;
char nums[11], decimal[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
bool check()
{
    sprintf(nums, "%05d%05d", numerator, denominator);
    for (i = 0; i < 10; i++)
    {
        count = 0;
        for (k = 0; k < 10; k++)
        {
            if (nums[k] == decimal[i])
                count++;
        }
        if (count != 1)
            return false;
    }
    return true;
}
int main()
{
    while (true)
    {
        cin >> N;
        if (N == 0)
            break;
        has_solution = false;
        denominator = 1234;
        while (denominator <= 98765)
        {
            numerator = N * denominator;

            if (numerator > 98765)
                break;
            if (check())
            {
                cout << numerator << " / " << denominator << " = " << N << endl;
                has_solution = true;
            }
            denominator++;
        }
        if (!has_solution)
            printf("There are no solutions for %d.\n", N);
        first = false;
    }
    return 0;
};