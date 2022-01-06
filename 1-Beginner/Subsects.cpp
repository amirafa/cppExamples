#include<iostream>
#include<conio.h>
using namespace std;
/*int strlen(int str[]) {
	int i; for (i = 0; str[i]; i++); return i;
}*/
void f(char s[],int b[],int n,int i) {
	if (i == n) {
		for (int j = 0; j < n;j++)
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
	char s[3] = { 'a','b','c' };
	int b[3] = { 1,2,3 };
	f(s, b, 3, 0);
	_getch();
}