#include <iostream>
#include <string>
using namespace std;
string pr[1000][2];
string Find(string s, int a)
{
    for (int i = 0; i < a; i++)
    {
        if (s == pr[i][0])
        {
            return pr[i][1];
            break;
        }
    }
    return "0";
}
int main()
{
    int n;
    cin >> n;
    string r;
    cin >> r;
    cout << r << endl;
    int a = 0;
    for (int i = 0; i < r.size(); i++)
    {
        if ((r[i] >= 'a') && (r[i] <= 'z'))
        {
            pr[a][1] = r[i];
            a++;
            continue;
        }
        pr[a][0] += r[i];
    }
    string pc,ans;
    cin >> pc;
    while (pc.size() > 0)
    {
        string t = "";
        for (int i = 0; i < pc.size(); i++)
        {
            t += pc[i];
            string tt = Find(t, a);
            //cout << tt;
            if (tt != "0")
            {
                ans += tt;
                pc.erase(0, i+1);
                break;
            }
        }
    }
    cout << ans;
    /*for (int i = 0; i < a;i++)
    {
        cout << pr[i][0] << " " << pr[i][1] << endl;
    }*/
}