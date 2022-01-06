#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int a[5],i,j,t;
for(i=0;i<=4;i++){
 cout<<"enter num"<<i<<"=";
 cin>>a[i];
 }
 //________________________________________________
 for(i=0;i<=3;i++)
 {
  for(j=0;j<=i;j++)
  {
   if(a[j]<a[j+1])
   {
   t = a[j];
   a[j]=a[j+1];
   a[j+1]=t;
   }
  }
 }
 for(i=0;i<5;i++)
 {
  cout<<a[i]<<endl;
 }
getch() ;
}