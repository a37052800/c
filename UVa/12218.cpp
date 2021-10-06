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
    if (unsort.size() > 0)
    {
        for (int i = 0; i < unsort.size(); i++)
        {
            string resultTemp = result;
            string unsortTemp = unsort;
            resultTemp += unsortTemp[i];
            unsortTemp.erase(i, 1);
            sort(resultTemp, unsortTemp);
        }
    }
    else
    {
        cout << stoi(result) << endl;
        if (isPrime(stoi(result)))
            primeCount++;
    }
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