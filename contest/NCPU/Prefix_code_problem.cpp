#include <deque>
#include <string>
#include <iostream>
using namespace std;
class nood
{
public:
    char a;
    nood *z;
    nood *o;
};
deque<nood*> tr;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        string df, px;
        getline(cin, df);
        getline(cin, px);
        nood f;
        tr.push_back(&f);
        for (int i = 0; i < df.size;i++)
        {
            if(!((df[i]>'a')&&(df[i]<'z')))
            {
                nood new ne;
                if(df[i]==0)
                {
                    tr.back()->z = &ne;
                }
                else
                {
                    tr.back()->o = &ne;
                }
            }
        }
    }
}