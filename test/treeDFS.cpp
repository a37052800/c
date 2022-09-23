#include <iostream>
#include <string>
//#include <vector>
using namespace std;
string dfs(string);
int main()
{
    // vector<int> list;
    string n = "01234";
    dfs(n);
}
string dfs(string n)
{
    string ans;
    if (n.size() > 1)
    {
        for (int i = 0; i < n.size(); i++)
        {
            string t = n;
            cout<<dfs(t.erase(i, 1))<<endl;
        }
    }
    return n;
}