#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int primeCount = 0;

bool isPrime(int n)
{
    if (sqrt(n) - (int)sqrt(n) == 0)
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
    bool used = false;
    if ((unsort.size() > 0))
    {
        bool fillNum[10];
        for (int i = 1; i < 10; i++)
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
            else
                used = false;
        }
    }
    //cout << stoi(result) << endl;
    if ((result.size() > 0) && (isPrime(std::stoi(result))))
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