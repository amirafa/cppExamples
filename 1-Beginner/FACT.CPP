#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int a,b=1;
cout<<"enter num ";
cin>>a;
for(int i=1;i<=a;i++){
b*=i;
}
cout<<"fact is  "<<b;
 getch();
}