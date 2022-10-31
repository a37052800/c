#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef struct node
{
    int data;
    node *right;
    node *left;
} node;

vector<int> readlist()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss.str(s);
    int t;
    vector<int> vec;
    while (ss >> t)
        vec.push_back(t);
    return vec;
}

vector<int> inorder;
vector<int> postorder;

node *praseNode(int l, int r, int n)
{
    cout << l << ' ' << r << ' ' << n << '\n';
    if (l > r)
        return NULL;
    int p = 0;
    while (inorder[p] == postorder[n])
        p++;
    node *root = new node;
    root->data = postorder[n];
    root->left = praseNode(l, p - 1, n - p - 1);
    root->right = praseNode(p + 1, r, n - 1);
    return root;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    while (!cin.eof())
    {
        inorder = readlist();
        postorder = readlist();

        node *root = praseNode(0, inorder.size()-1, postorder.size()-1);
        if (!root)
            return 1;

        cout << root->data << "\n";
        return 0;
    }
}