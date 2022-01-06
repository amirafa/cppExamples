#include <iostream>
#include "BST.h"
using namespace std;
BST::BST() { r = NULL; }
void BST::add(int x) {
	node *m = new node(x, NULL, NULL);
	node *n = r;
	node *p = NULL;
	if (r == NULL) r = m;
	else {
		while (n != NULL) {
			p = n;
			if (x < n->data) n = n->Lchild;
			else if (x > n->data) n = n->Rchild;
		}
		if (x < p->data) p->Lchild = m;
		else if (x > p->data) p->Rchild = m;
	}
}

void BST::Print() { Inorder(r); }

void BST::Inorder(node *r) {
	if (r == NULL) return;
	else
	{
		Inorder(r->Lchild);
		cout << r->data << " / ";
		Inorder(r->Rchild);
	}
}

void BST::search(int x) {
	node *n = r;
	int flag = 0;
	while (n != NULL) {
		if (n->data == x) {
			flag = 1;
			break;
		}
		else if (n->data > x) n = n->Lchild;
		else n = n->Rchild;
	}
	if (flag==1) cout << "\nTrue\n";
	else cout << "\nFalse\n";
}

void BST::Deldata(int x) { delData(r, x); }

void BST::delData(node *root,int x) {
	node *n = root;
	node *t = n;
	while (n != NULL) {
//_______________________________
		if (r->Lchild == NULL && r->Rchild == NULL ) {
			r = NULL;
		}
		    //case 1:
		else if (n->data == x) {
			if (n->Lchild == NULL && n->Rchild == NULL) {
				if (x < t->data) t->Lchild = NULL;
				else t->Rchild = NULL;
			}
			//case 2:
			else if (n->Lchild == NULL && n->Rchild != NULL) {
				if (n->data < t->data) t->Lchild = n->Rchild;
				else t->Rchild = n->Rchild;
			}
			else if (n->Lchild != NULL && n->Rchild == NULL) {
				if (n->data < t->data) t->Lchild = n->Lchild;
				else t->Rchild = n->Lchild;
			}
			//case 3:
			else {
				node *t = RLV(n);
				int temp = t->data;
				Deldata(t->data);
				n->data = temp;
			}

		}
		//________________________________
		t = n;
		if (x < n->data) n = n->Lchild;
		else n = n->Rchild;
	}
}

//RightChild Less-value
node *BST::RLV(node *m) {
	if (m->Rchild->Lchild == NULL || m->Rchild == NULL) return m;
	else {
		node *n = m;
		n = n->Rchild;
		while (n->Lchild != NULL) n = n->Lchild;
		RLV(n);
	}
}
