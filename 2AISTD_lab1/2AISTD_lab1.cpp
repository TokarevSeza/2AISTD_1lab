#include <iostream>
#include "RBtree.h"

int main()
{
	RBTree<int, char> tree;
	tree.Insert(15, 'a');
	tree.Insert(16, 'b');
	tree.Insert(17, 'c');
	tree.Remove(17);
	tree.Print();
	std::cout << tree.Find_Element(15);
}