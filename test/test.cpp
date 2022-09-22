#include <cmath>
#include <iostream>
using namespace std;
int s = 0;
int S[999];

void part(int lo, int hi, int &pi)
{
    cout << "#" << lo << " " << hi << endl;
    int key = S[lo];
    int j = lo;
    for (int i = lo + 1; i < hi; i++)
    {
        if (S[i] < key)
        {
            j++;
            int t = S[j];
            S[j] = S[i];
            S[i] = t;
        }
        s++;
    }
    pi = j;
    cout << j << "**\n";
    int t = S[lo];
    S[lo] = S[pi];
    S[pi] = t;
    //cout << pi << endl;
}
void qu(int lo, int hi)
{
    cout << "@" << lo << " " << hi << endl;
    int pi;
    if (hi > lo)
    {
        part(lo, hi, pi);
        qu(lo, pi);
        qu(pi + 1, hi);
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> S[i];
    qu(0, n);
    for (int i = 0; i < n; i++)
        cout << S[i] << " ";
    cout << endl
         << s;
}
