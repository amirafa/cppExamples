#include<iostream>
#include<conio.h>
using namespace std;
swap(char s[],int k,int i){
	char t[1];
	t[0]= s[k];
	s [k]= s [i];
	s[i]= t[0];
}
void p(char s[],int n,int k) {
if(k==n)cout<<s;
else{
	for(int i=k;i<n;i++){
		swap(s,k,i);p(s,n,k+1);swap(s,k,i);
	}
}
}
int main() {
	char s[4] = { 'a','b','c','d' };
	p(s, 4, 0);
	_getch();
}