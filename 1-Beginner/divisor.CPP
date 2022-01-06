#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int a;
cout<<"enter a num  ";
cin>>a;
for (int i=1;i<=a;i++){
if (a%i==0) cout<<" "<<i;}
 getch();
}