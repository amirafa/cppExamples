#include<iostream>
using namespace std;

void f(char s[], int b[], int n, int i) {
	if (i == n) {
		for (int j = 0; j < n; j++)
		{
			if (b[j] == 1) cout << s[j];
		}
		cout << " ";  //impo
	}
	else {
		b[i] = 0;
		f(s, b, n, i + 1);
		b[i] = 1;
		f(s, b, n, i + 1);
		b[i] = 0;
	}
}
int main() {
	char s[4] = { 'a','b','c','d' };
	int b[4] = { 1,2,3,4 };
	f(s, b, 4, 0);             //n=#
	cin.get();
}