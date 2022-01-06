#include <iostream>

using namespace std;

class node{
public:
int data;
node* next;
node(int d){
    data=d;
    next=NULL;
}

};

void print(node *root){
    if(root->next==NULL) cout<<root->data;
    else {
        cout<<root->data<<"->";
        print(root->next);
        }

}

int main(){
node *root=new node(1);
root->next=new node(2);
root->next->next=new node(3);

print(root);

cin.get();
return 0;
}