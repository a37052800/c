#include <iostream>
using namespace std;
class Homo
{
public:
    Homo *f = NULL;
    int c = 0;
};
int main()
{
    int n;
    cin >> n;
    Homo p[n - 1];
    int temp[n][2];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> temp[i][0] >> temp[i][1];
    }
    for (int i = 0; i < n - 1; i++)
    {
        p[i].c = temp[i][1];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (temp[i][0] == p[j].c)
            {
                p[i].f = &p[j];
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        cout << "name " << p[i].c;
        if (p[i].f != NULL)
        {
            cout << " f " << p[i].f ->f ->c << endl;
        }
    }
}