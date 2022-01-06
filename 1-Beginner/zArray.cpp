#include<iostream>
#include<conio.h>
using namespace std;
int strlen(int str[]) {
	int i; for (i = 0; str[i]; i++); return i;
}
void zArray(int str[], int len,int i,int cnt) {
	if (i == len) {
		for (int j = 0; j < len;j++)
		cout << str[j]<<" ";
	}
	else {
		str[cnt] = i;
		i++; cnt++;
		zArray(str, len, i,cnt);
	}
}
int main() {
	int len, cnt = 0;
	int str[20];
	cin >> len;
	int i = (-len / 2);
	zArray(str, len, i,cnt);
	_getch();
}