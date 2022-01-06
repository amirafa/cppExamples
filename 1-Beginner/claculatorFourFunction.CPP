#include<iostream>
#include<stdlib.h>
//
using namespace std;
//----GLOBALS-------
int N1,N2;
int sum();
int mine();
int mul();
float div();
//------------Fn------------
void print(){
 cout<<"enter N1 ";
 cin>>N1;
 cout<<"enter N2 ";
 cin>>N2;
}
int op(){
 char a;
 cout<<"--------------------\n enter sign of op [+ - * /]\n";
 cin>>a;
 switch(a){
 case ('+') : cout<<"sum = "<<sum();
  break;
 case ('-') : cout<<"mine = "<<mine();
  break;
 case ('*') : cout<<"multiple = "<<mul();
  break;
 case ('/') : cout<<"div = "<<div();
  break;
 default : exit(0);
  break;}
}
int sum(){return (N1+N2);}
int mine(){return (N1-N2);}
int mul(){return (N1*N2);}
float div(){return ((float) N1/(float)N2);}
//-------------Main-----------
int main(){
cout<<"-----------------------\n---------Calculator---------\n";
print ();
while (1){
op ();
cout<<"\n";
}
return 0;
}