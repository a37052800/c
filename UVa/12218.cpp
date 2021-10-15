#include <cmath>
#include <iostream>
#include <sstream>
using namespace std;

int primeCount = 0;

bool isPrime(int n)
{
    if (sqrt(n) == (int)sqrt(n))
        return false;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void sort(string result, string unsort)
{
    if ((unsort.size() > 0))
    {
        bool fillNum[10];
        for (int i = 0; i < 10; i++)
            fillNum[i] = false;
        if (result == "")
            fillNum[0] = true;
        for (int i = 0; i < unsort.size(); i++)
        {
            if (!fillNum[(int)unsort[i] - 48])
            {
                fillNum[(int)unsort[i] - 48] = true;
                string resultTemp = result;
                string unsortTemp = unsort;
                resultTemp += unsortTemp[i];
                unsortTemp.erase(i, 1);
                sort(resultTemp, unsortTemp);
            }
        }
    }
    stringstream strToInt;
    strToInt.clear();
    strToInt.str(result);
    int resultTemp;
    strToInt >> resultTemp;
    if ((result.size() > 0) && (isPrime(resultTemp)))
        primeCount++;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        primeCount = 0;
        string input;
        cin >> input;
        sort("", input);
        cout << primeCount << endl;
    }
}