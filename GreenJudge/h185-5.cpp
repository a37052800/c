#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("h185-test.txt");
    int n;
    cin >> n;
    //cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        int ai, aj;
        bool dc = true;
        string s, temp;
        //cin.clear();
        cin.sync();
        cin >> ai >> aj;
        //cout << ai << " " << aj << endl;
        //cin.clear();
        cin.sync();
        getline(cin, s);
        //cout << s << endl;
        if (s.rfind(" ") != string::npos)
            s.resize(s.rfind(" "));
        fout << s << endl;
        for (int j = 1; j < ai; j++)
        {
            //cin.clear();
            cin.sync();
            getline(cin, temp);
            //cout << temp << endl;
            if (temp.find(" ") != string::npos && dc)
            {
                if (temp.compare(temp.find(" ") + 1, temp.size() - temp.find(" ") - 1, s) == 0)
                {
                    s = temp;
                    if (s.rfind(" ") != string::npos)
                        s.resize(s.rfind(" "));
                    fout << s << endl;
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