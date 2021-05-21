#include <deque>
#include <iostream>
#include <string>
using namespace std;
class nood
{
public:
    char a = NULL;
    nood *z = NULL;
    nood *o = NULL;
};
deque<nood *> tr;
void tp(nood *p)
{
    if (p->z != NULL)
        tp(p->z);
    cout << p->a;
    if (p->o != NULL)
        tp(p->o);
};
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string df, px;
        cin.clear();
        cin.sync();
        getline(cin, df);
        getline(cin, px);
        nood *f = new nood;
        tr.push_back(f);
        for (int j = 0; j < df.size(); j++)
        {
            if ((df[j] >= 'a') && (df[j] <= 'z'))
            {
                tr.back()->a = df[j];
            }
            else
            {
                nood *ne = new nood;
                if (df[j] == '0')
                {
                    tr.back()->z = ne;
                    tr.push_back(ne);
                }
                else
                {
                }
            }
        }
        cout << tr.front()->a << tr.size();
        //tp(tr.front());
        /*nood *stem = tr.front();
        for (int i = 0; i < px.size(); i++)
        {
            if (stem->a != NULL)
            {
                cout << stem->a;
                stem = tr.front();
            }
            else
            {
                if (px[i] == 0)
                {
                    stem = stem->z;
                }
                else
                {
                    stem = stem->o;
                }
            }
        }*/
    }
}