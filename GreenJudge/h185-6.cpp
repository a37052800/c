#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
string GetLine()
{
    char c;
    string s;
    c = getch();
    while(int(c)!=13)
    {
        s += c;
        c = getch();
    }
    return s;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ai, aj;
        bool dc = true;
        string s,temp;
        cin >> ai >> aj;
        s = GetLine();
        if (s.rfind(" ") != string::npos)
            s.resize(s.rfind(" "));
        for (int j = 1; j < ai; j++)
        {
            temp = GetLine();
            if (temp.find(" ") != string::npos && dc)
            {
                if (temp.compare(temp.find(" ") + 1, temp.size() - temp.find(" ") - 1, s) == 0)
                {
                    s = temp;
                    if (s.rfind(" ") != string::npos)
                        s.resize(s.rfind(" "));
                }
                else
                {
                    dc = false;
                }
            }
        }
        if (dc)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}