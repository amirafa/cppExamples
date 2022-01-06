#pragma once
class node {
	friend class BST;
public:
	node(int Data, node *Lc,node *Rc);
	int data;
	node *Lchild;
	node *Rchild;
};