#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("test.txt");
    if (!fout.is_open())
        cout << "fail";
    /*for (int i = 1; i < 500000;i++)
    {
        fout << i << " ";
    }*/

    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    string temp, s;
    cin >> s;
    for (int i = 2; i < 500000; i++)
    {
        cin >> temp;
        fflush(stdin);
        s += " ";
        s += temp;
    }
    //fout << s;

    fout.close();
}
