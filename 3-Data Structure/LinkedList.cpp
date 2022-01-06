//EN3MY (c) . LTD

#include <iostream>
using namespace std;
class node {
	friend class LL;
	node(int a,node *b) {   //Constructor
		data = a;      
		next = b;   
	}
	int data;          //data
	node *next;     //pointer to next node
};
class LL {
private:
	node *H;        //pointer to first node
public:
//_________________________________________
	LL() { H = NULL; }
//_________________________________________
	void addinhead(int x) {
		cout << "node created\n";
		cout << "_________________________\n";
		node *n = new node(x, NULL);   //it most be friend
		if (H == NULL) H = n;
		else {
			n->next = H;   //poiner of n , points to the head coz head is pointing , now , to 2nd node.
			H = n;         //n now is the head
		}
	}
//_________________________________________
	void add(int x) {
		cout << "node created\n";
		cout << "_________________________\n";
		node *n = H;
		node *nn = new node(x, NULL);
		if (H == NULL) H = nn;
		else {
			while (n->next != NULL) n = n->next;
			n->next = nn;
		}
	}
//__________________________________________
	bool Search(int x) {
		node *n = H;
		while (n != NULL) {
			if (n->data == x)
				return true;
			else
				n = n->next;
		}
		return false;
	}
//__________________________________________
	void deldata(int x) {
		node *n = H;
		node *p = NULL;
		while (n!=NULL)
		{
			if (n->data == x) {
				if (p != NULL) {
					p->next = n->next;
					n = NULL;
				}
				else {
					H=n->next;
					n = H;
				}
			}
			else {
				p = n;
				n = n->next;
			}
		}
	}
//__________________________________________
	void delOfEnd() {
		node *n = H;
		node *p = H->next->next;
		while (p != NULL) {
			p = p->next;
			n = n->next;
		}
		n->next = NULL;
	} 
//__________________________________________
	int countX(int x) {
		node *n = H;
		int counter = 0;
		while (n!=NULL)
		{
			if (n->data == x) counter++;
			n = n->next;
		}
		return counter;
	}
//__________________________________________
	void addToEnd(int x) {
		node *nn = new node(x, NULL);
		node *n = H;
		node *p = H->next->next;
		while (p != NULL) {
			p = p->next;
			n = n->next;
		}
		n->next = nn;
	}
//__________________________________________
	void viseNode() {  //Ma'akus
		node *n = H;
		node *q = H->next;
		node *p = NULL;
		while (n != NULL) {
			n->next = p;
			p = n;
			n = q;
			if( q!=NULL) q = q->next;

		}
		H = p;
	}
//__________________________________________
	void minL() {
		node *n = H;
		int min = H->data;
		while (n != NULL) {
			if (n->data < min) min = n->data;
			n = n->next;
		}
		cout << "\nmin is: " << min;
	}
//__________________________________________
	/*node copyL() {
	}*/
//__________________________________________
	void Print() {
		node *n = H;
		while (n != NULL) {
			cout <<n->data<<"-->";
			n = n->next;
		}
		cout << "NULL";
	}
//___________________________________________
};


int main() {
	LL nl;
	cout << "How many nodes do u wanna add?\n";
	int n, data;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "enter data " << i + 1 << " : ";
		cin >> data;
		nl.add(data);
	}

//_________Enter ur Fn__________________
	
//______________________________________

	cout << "\n_______SHOW__________\n";
	nl.Print();
	cin.get();
	cin.get();
}

//_______________________________________________________Fn____________________________________________________

//addinHead:
//int data;
//cin >> data;
//nl.addinHead(data);
//}

//add:
//cout << "How many nodes do u wanna add(inHead)?\n";
//int n, data;
//cin >> n;
//for (int i = 0; i < n; i++) {
//	cout << "enter data " << i + 1 << " : ";
//	cin >> data;
//	nl.add(data);
//}

//search:
//cout << "data u wanna search: ";
//int sdata; bool sbool;
//cin >> sdata;
//sbool = nl.Search(sdata);
//if (sbool)cout << "\nIs Here\n";
//else cout << "Isn't Here\n";

//deldata:
//cout << "\nWhich data do u wanna del?\n";
//int ddata;
//cin >> ddata;
//nl.deldata(ddata);

//delOfEnd:
//cout << "\ndelOFEnd:\n";
//nl.delOfEnd();

//countX:
//cout << "\nwhich data do u wanna count? :  ";
//int cdata;
//cin >> cdata;
//cout << nl.countX(cdata);

//addToEnd:
//cout << "data u wanna add: ";
//int endData;
//cin >> endData;
//nl.addToEnd(endData);

//viseNode:
//cout << "\nviseNode is: \n";
//nl.viseNode();

//minL:
//nl.minL();

