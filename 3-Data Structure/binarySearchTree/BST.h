#include <iostream>
#include "node.h"
using namespace std;
class BST {
public:
	node *r;
	BST();
	void add(int x);
	void search(int x);
	void delData(node *,int);
	node *RLV(node *);
	void Print();
	void Deldata(int);
	void Inorder(node *);
};
