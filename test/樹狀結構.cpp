#include <iostream>
#include <list>
using namespace std;
class Tree
{
public:
	int data;
	Tree *parent;
	list<Tree *> child;
	void add_child(Tree *temp)
	{
		this->child.push_back(temp);
	}
};
int main()
{
	Tree *p1, *p2, *p3;
	p1 = new Tree;
	p1->data = 0;
	p2 = new Tree;
	p2->data = 1;
	p3 = new Tree;
	p3->data = 2;
	p1->add_child(p2);
	p1->add_child(p3);
	for (auto its = p1->child.begin(); its != p1->child.end(); ++its)
		cout << &its->data << " ";
}

int main() {
	int a, b, node, n, max;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i<n; i++) {
			F[i].clear();
		}
		for (int i = 1; i<n; i++) {//建立無向圖
			scanf("%d %d", &a, &b);
			F[a].push_back(b);
			F[b].push_back(a);
		}
		memset(v, 0, sizeof(v));
		v[0] = 1;
		dfs(0, 1);  //找出最遠的另一個端點
		max = -1;
		for (int i = 0; i < n; i++) {
			if (v[i] > max) {
				max = v[i];
				node = i;
			}
		}
		memset(v, 0, sizeof(v));
		v[node] = 1;
		dfs(node, 1);  //從最遠的端點，找尋最長路徑的長度，就是答案
		for (int i = 0; i < n; i++) {
			if (v[i] > max) {
				max = v[i];
			}
		}
		printf("%d\n", max-1);
	}
}


/*
8
0 1
0 2
0 3
7 0
1 4
1 5
3 6
*/