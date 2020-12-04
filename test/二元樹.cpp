#include<iostream>
class nood
{
    public:
        nood *lift, *right;
        int data;
};
int dfs()
int main()
{
    nood tree[7];
    tree[0].data = 0;
    tree[1].data = 1;
    tree[2].data = 2;
    tree[0].lift = &tree[1];
    tree[0].right = &tree[2];
    tree[1].lift = NULL;
    tree[1].right = NULL;
    tree[2].lift = NULL;
    tree[2].right = NULL;
}