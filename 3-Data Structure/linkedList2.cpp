#include<iostream>
using namespace std;

class node{
friend class ll;
int data;
node *next;
node(int d,node *n){
    data=d;
    next=n;
    }
};

class ll{
public:
node *h; //head
node *t; //temporary(pre_node)
node *n; //node
ll(){
    h=NULL;
    }
void add(int d){
    node *n=new node(d,NULL);
    if (h==NULL){
        h=n;
        t=n;
        } 
    else {
        t->next=n;
        t=n;
        }
    }
void del(int d){
    t=NULL;
    n=h;
    while(n!=NULL){
        if (n->data==d){
            t->next=n->next; //t->next if t is null is complicate ?
            break;
        }
        else {
            t=n;
            n=n->next;
        }
    }
}
void show(){
    node *sh=h;
    while(sh!=NULL){
        cout<<sh->data<<"->";
        sh=sh->next;
    }
}
};

int main(){
ll l1;
//add
cout << "How many nodes do u wanna add?\n";
	int n, data;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "enter data " << i + 1 << " : ";
		cin >> data;
		l1.add(data);
	}
//del
cout << "\nWhich data do u wanna del?\n";
cin >> data;
l1.del(data);
//_________________
//_________________
    l1.show();
    cin.get();
    cin.get();
}