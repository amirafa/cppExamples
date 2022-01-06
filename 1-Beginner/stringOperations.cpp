#include "stdafx.h"
#include<iostream>
#include<conio>
#include<stdlib>
#include<string>
using namespace std;
//_______Globals_________
string str;
int lengthCount=0;
//_______Signs___________
int Length();
int Search();
int Insert();
void Replace();
void Repeat();
void Delet();
//_______Main____________
int main(){
clrscr();
cout<<"Enter a String: ";
cin>>str;


while (1){
 char key;
 cout<<"\n\n______________by___RAFATI___9303633______________________\n";
 cout<<"\n1=tool 2=jostojo 3=afzoodan 4=jabejai 5=tekrar 6=delete 7=khoruj\n";
 cin>>key;
 switch (key){
  case ('1'):Length();
   break;
  case ('2'):Search();
   break;
  case ('3'):Insert();
   break;
  case ('4'):Replace();
   break;
  case ('5'):Repeat();
   break;
 case ('6'):Delet();
   break;
  case ('7'):exit(0);
     break;
 }
}//end while
getch() ;
return 0;
}
//_____Fns________________
int Length(){
clrscr();
cout<<"\n Length = "<<str.length()<<endl;
}
//_______
int Search(){
clrscr();
string subString;
cout<<"substring u search for: ";
cin>>subString;
cout<<str<<" >> "<<"it begins From letter: "<<str.find(subString)+1;
}
//_______
int Insert(){
clrscr();
string subString;
int subSplace;
cout<<"substring u add: ";
cin>>subString;
cout<<"add From letter : "<<"("<<str<<") ";
cin>>subSplace;
str.insert(subSplace-1,subString);
cout<<str;
}
//_______
void Delet(){
clrscr();
string subString;
cout<<"string for Deleting: ";
cin>>subString;
int a=str.find(subString);
int b=subString.length();
for(int i=a;i<(a+b);++i){
   str[i]=0;
  }
cout<<str;
}
//_______
void Replace(){
int c;
string subString;
string inString;
cout<<"string for Replacing: ";
cin>>subString;
cout<<"Replace with: ";
cin>>inString;
int a=str.find(inString);
int b=inString.length();
for (int i=a;i<a+b;++i){
    str[i]=subString[i-a];}
cout<<"Replaced string is: "<<str;
}
//________
void Repeat(){
clrscr();
char subChar;
int count=0;
cout<<"Char for Counting: ";
cin>>subChar;
int f=str.length();
 for (int i=0;i<f;++i){
   if(str[i]== subChar){
   count++;
   }
 }
cout<<"It Repeated for "<<count<<" times";
}






