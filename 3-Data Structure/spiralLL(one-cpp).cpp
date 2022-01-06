#include <iostream>
using namespace std;

class node {
public:
	friend class LL;
	node(int Data,node *Next) {
		data = Data;
		next = Next;
	}
	int data;
	node *next;
};
class LL {
public:
	node *H;
	LL() {
		H = NULL;
	}
	void addInHead(int x) {
		node *n = new node(x, NULL);
		if (H == NULL) {
			H = n;
			n->next = n;
		}
		node *p = H;
		while (p->next != H) {
			p = p->next;
		}
		p->next = n;
		n->next = H;
		H = n;
	}
	void addToEnd(int x){
		node *n = new node(x, NULL);
		node *p = H;
		if (H == NULL) {
			H = n;
			n->next = n;
		}
		while (p->next != H) {
			p = p->next;
		}
		p->next = n;
		n->next = H;

	}
	void delData(int x) {
		node *n = H;
		node *p = NULL;
		if (H == NULL);
		else if (n->next == n && n->data == x) H = NULL;
		else {
			do {
				if (n->data == x) {
					if (p != NULL) {
						p->next = n->next;
						n = NULL;
						break;
					}
					else {
						node *t = n;
						while (t->next != H) {
							t = t->next;
						}
						t->next = n->next;
						H = n->next;
						break;
					}
				}
				n = n->next;
				p = n;
			} while (n!= H);
		}
	}
	void viseVersa() {
		node *n = H;
		node *q=NULL;
		if (H != NULL)q = n->next;
		node *p = H;
		while (p->next != H) p = p->next;
		if (H == NULL);
		else if (p == q)H = q;
		else if (n->next == n);
		else {
			n->next = p;
			p = n;
			n = q;
			q = q->next;
			n->next = p;
		}
		H = n;
	}
	node *Copy() {
		node *n = H;
		node *m = new node(n->data, NULL);
		node *H2 = m;
		if (H == NULL);
		else {
			do {
				m->data = n->data;
				n = n->next;
				m->next = new node(0, NULL);
				m = m->next;
			} while (n->next != H);
			m->data = n->data;
			m->next = H2;
		}
		return H2;
	}
	void Print() {
		node *n = H;
		if (H == NULL);
		else {
			while (n->next != H) {
				cout << n->data << "-->";
				n = n->next;
			}
			cout << n->data << "-->";
		}
	}
};

int main() {
	int data;
	LL nl1, nl2;
	while (1) {
		system("cls");
		cout << "\n\n_______________________________MENU_________________________________";
		cout << "\n\np:Print  a:addInHead  e:addToEnd  d:delete  v:ViseVersa  c:Copy  :\n\n";
		char c;
		cin >> c;
		switch (c) {
		case 'p':
			cout << "\n_______SHOW__________\n";
			nl1.Print();
			cin.get();
			cin.get();
			break;
		case 'a':
			cout << "\nenter data : ";
			cin >> data;
			nl1.addInHead(data);
			break;
		case 'e':
			cout << "\nenter data : ";
			cin >> data;
			nl1.addToEnd(data);
			break;
		case 'd':
			cout << "\nenter data : ";
			cin >> data;
			nl1.delData(data);
			break;
		case 'v':
			nl1.viseVersa();
			break;
		case 'c':
			cout << "\n_______Copy__________\n";
			nl2.H = nl1.Copy();
			nl2.Print();
			cin.get();
			cin.get();
		}
	}
}