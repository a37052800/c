#include <iostream>
#include <string>
//#include <vector>
using namespace std;
void dfs(string, string);
int main()
{
    // vector<int> list;
    string n = "123456789";
    string t = "";
    dfs(n, t);
}
void dfs(string n, string t)
{
    string ans;
    if (n.size() > 0)
    {
        for (int i = 0; i < n.size(); i++)
        {
            string temp = n;
            dfs(temp.erase(i, 1), t + n[i]);
        }
    }
    else
        cout << t << endl;
}