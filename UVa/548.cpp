#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct node
{
    int data;
    node *right;
    node *left;

    node(){};
    node(int data)
    {
        this->data = data;
        right = NULL;
        left = NULL;
    }
};

node *praseNode(vector<int> r, vector<int> l, vector<int> post)
{
    if (post.empty())
        return NULL;
    node currentNode = node(post.back());
    currentNode.right;
    currentNode.left;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string inorder, postorder;
    getline(cin, inorder);
    getline(cin, postorder);
    while (!cin.eof())
    {
        reverse(postorder.begin(), postorder.end());
        vector<int> in, post;
        stringstream ss;
        ss.str(inorder);
        while (!ss.eof())
        {
            int t;
            ss >> t;
            in.push_back(t);
        }
        ss.clear();
        ss.str(postorder);
        while (!ss.eof())
        {
            int t;
            ss >> t;
            post.push_back(t);
        }
        vector<int>::iterator it = find(in.begin(), in.end(), post.back());
        vector<int> r, l;
        r.assign(in.begin(), --it);
        l.assign(++it, in.end());
        node *root = praseNode(r, l, post);
        getline(cin, inorder);
        getline(cin, postorder);
    }
}