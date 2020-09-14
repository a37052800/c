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
