#include<iostream>
#include<conio.h>
using namespace std;
int strlen(int str[]) {
	int i; for (i = 0; str[i]; i++); return i;
}
void search(char str[],char a,int len,int i) {
	if (i==len) { cout << "nothing"; }
	else {
		if (str[i] == a) {
			str[i] = ' ';
			for (int j = i; j < len; j++) {
				str[j] = str[j + 1];
				str[j + 1] = ' ';
			}
			cout << str;
			_getch();
			exit(0);
		}
		else {
			search(str, a, len, ++i);
		}
	}
}
int main() {
	char str[20]; char a;
	int len = strlen(str);
	cin >> str;
	cin >> a;
	search(str,a,len,0);
	_getch();
}