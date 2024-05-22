#include <iostream>
#include <string>
#include <sstream>
#include <queue>
#include <set>
#include <map>

using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int round;
    cin >> round;
    while (round--)
    {
        int n, t1, t2, t3, t4, t5, q, sum = 0, is_lock = -1;
        set<int> lock_prog;
        map<string, int> arg_map;
        cin >> n >> t1 >> t2 >> t3 >> t4 >> t5 >> q;
        queue<string> que[n];
        cin.ignore();
        for (int i = 0; i < n; i++)
        {
            string command;
            do
            {
                getline(cin, command);
                que[i].push(command);
                sum++;
            } while (command != "end");
        }
        bool first = true;
        while (sum)
        {
            string command;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < q;)
                {
                    if (lock_prog.count(i) && i != is_lock)
                        break;
                    if (que[i].empty())
                        break;
                    command = que[i].front();
                    cout << "running: " << command << '\n';
                    if (command == "lock")
                    {
                        j += t4;
                        lock_prog.insert(i);
                        if (is_lock != -1)
                            break;
                        else
                        {
                            is_lock = i;
                            que[i].pop();
                            sum--;
                        }
                    }
                    else if (command == "unlock")
                    {
                        que[i].pop();
                        is_lock = -1;
                        lock_prog.erase(i);
                        j += t5;
                        sum--;
                    }
                    else if (command.find("=") != string::npos)
                    {
                        que[i].pop();
                        stringstream ss;
                        ss.str(command);
                        string name, eq;
                        int val;
                        ss >> name >> eq >> val;
                        arg_map[name] = val;
                        j += t1;
                        sum--;
                    }
                    else if (command.find("print") != string::npos)
                    {
                        que[i].pop();
                        stringstream ss;
                        ss.str(command);
                        string print, name;
                        ss >> print >> name;
                        if (!first)
                            cout << '\n';
                        first = false;
                        cout << i + 1 << ": " << arg_map[name];
                        j += t2;
                        sum--;
                    }
                    else if (command == "end")
                    {
                        que[i].pop();
                        j += t5;
                        sum--;
                    }
                }
            }
        }
    }
    return 0;
}
