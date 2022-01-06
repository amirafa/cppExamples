#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int i;
char name[5][10];
for(i=0;i<=4;i++){
cin>>name[i];
}
cout<<"_________________________________\n";
for(i=0;i<=4;i++){
cout<<name[i]<<endl;
}
getch() ;
}