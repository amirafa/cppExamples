#include<iostream>
using namespace std;
void swap(char s[],int k,int i) {
	char c= s[i];
	s[i] = s[k];
	s[k] = c;
}
void f(char s[],int n,int k) {
	if (k == n) cout << s << endl;
	else {
		for (int i = k; i < n; i++) {
			swap(s, k, i); f(s, n, k + 1); swap(s, k, i);
		}
	}
}
int main() {
	char s[4] = { 'a','b','c','d' };
	f(s, 4, 0);
	cin.get();
}