#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ofstream fout;
    ifstream fin;
    fout.open("h185_ans.txt");
    fin.open("D:\\Users\\Tim\\Downloads\\final-senior.tar\\final-senior\\matrix\\data\\secret\\003-2row-1.in");
    int n;
    fin >> n;
    for (int i = 0; i < n; i++)
    {
        int ai, aj;
        bool dc = true;
        string s, temp;
        fin >> ai >> aj;
        fin.ignore();
        getline(fin, s);
        if (s.rfind(" ") != string::npos)
            s.resize(s.rfind(" "));
        for (int j = 1; j < ai; j++)
        {
            getline(fin, temp);
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
            fout << "Yes" << endl;
        else
            fout << "No" << endl;
    }
    fout.close();
    fin.close();
}