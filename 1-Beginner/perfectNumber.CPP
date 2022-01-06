#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int a,sum=0;
cout<<"enter a tamm num:  ";
cin>>a;
for(int i=1;i<a;i++){
if (a%i==0) {
cout<<i<<" ";
sum=i+sum;}
}
if (sum==a) cout<<"\n sum  = "<<sum<<"\n so taam";
else cout<<"\n sum = "<<sum<<"\n so na taam";
getch();
}