#include<iostream>
#include<stdlib.h>
using namespace std;
//glob_____________
char num1[100] = { 0 };
char num2[100] = { 0 };
char ans[200] = { 0 };
char op;
//Fns______________
int strlen(char s[]) {
	int i;
	for (i = 0; s[i]; i++);
	return i;
}
//_________________
void strev(char st[]) {
	int i, j;
	char temp;
	for (j = 0; st[j]; j++);
	j--;
	for (i = 0; i < j; i++, j--) {
		temp = st[i];
		st[i] = st[j];
		st[j] = temp;
	}
}
//_________________
void Sum(char *a, char *b) {
	int alen = strlen(a);
	int blen = strlen(b);
	int carry = 0;
	int sum;
	int max;
	if (alen > blen) max = alen; else max = blen;
	if (blen < alen) {
		for (int j = blen; j < alen; j++) {
			b[j] = '0';
		}
		for (int l = 0; l < blen; l++) {
			b[(alen - 1) - l] = b[(blen - 1) - l];
			b[(blen - 1) - l] = '0';
		}
		cout << "\n  " << num1 << endl;
	}
	else if (blen > alen) {
		for (int j = alen; j < blen; j++) {
			a[j] = '0';
		}
		for (int l = 0; l < alen; l++) {
			a[(blen - 1) - l] = a[(alen - 1) - l];
			a[(alen - 1) - l] = '0';
		}
		cout << "\n  " << num1 << endl;
	}
	else cout << "\n  " << num1 << endl;
	for (int i = (max - 1); i >= 0; i--) {
		sum = (a[i] - 48) + (b[i] - 48) + carry;
		a[i] = (sum % 10) + 48;
		carry = sum / 10;
	}
	cout << op << " " << num2 << endl << "________________" << endl;
	cout << "  ";
	if (carry != 0) cout << carry;
	cout << a;
	cin.get();
	cin.get();
}
//__________________
void Min(char *a, char *b) {
	int alen = strlen(a);
	int blen = strlen(b);
	int max;
	if (alen > blen) max = alen; else max = blen;
	if (blen < alen) {
		for (int j = blen; j < alen; j++) {
			b[j] = '0';
		}
		for (int l = 0; l < blen; l++) {
			b[(alen - 1) - l] = b[(blen - 1) - l];
			b[(blen - 1) - l] = '0';
		}
		cout << "\n  " << num1 << endl;
	}
	else if (blen > alen) {
		for (int j = alen; j < blen; j++) {
			a[j] = '0';
		}
		for (int l = 0; l < alen; l++) {
			a[(blen - 1) - l] = a[(alen - 1) - l];
			a[(alen - 1) - l] = '0';
		}
		cout << "\n  " << num1 << endl;
	}
	else cout << "\n  " << num1 << endl;
	for (int i = (max - 1); i >= 0; i--) {
		if (a[i] >= b[i]) {
			a[i] = ((a[i] - 48) - (b[i] - 48)) + 48;
		}
		else {
			a[i] = ((a[i] - 48) + 10) + 48;
			a[i - 1] = ((a[i - 1] - 48) - 1) + 48;
			a[i] = ((a[i] - 48) - (b[i] - 48)) + 48;
		}

	}
	cout << op << " " << num2 << endl << "________________" << endl;
	cout << "  ";
	cout << a;
	cin.get();
	cin.get();

}
//_________________
void Mul(char *a, char *b, char *c) {
	strev(a);
	strev(b);
	int i, j;
	for (i = 0; a[i]; i++)
		for (j = 0; b[j]; j++)
			c[i + j] = c[i + j] + (a[i] - 48)*(b[j] - 48);

	for (i = 0; i<200; i++)
	{
		c[i + 1] = (c[i] / 10) + c[i + 1];
		c[i] = c[i] % 10;
	}

	for (i = 199; c[i] == 0; i--); //shomarande
	for (; i >= 0; i--) c[i] = c[i] + '0'; //convert int to char

	strev(a);
	strev(b);
	strev(c);
	cout << "\n  " << num1 << endl;
	cout << op << " " << num2 << endl << "________________" << endl;
	cout << "  " << c;
	for (int i = 0; i <= 200; i++) c[i] = 0;
	cin.get();
	cin.get();
}
//main_____________
int main() {
	while (1) {
		system("cls");
		cout << "\nenter 1st num = ";
		cin >> num1;
		cout << "enter 2nd num = ";
		cin >> num2;
		cout << "OP (+,-,*,/) = ";
		cin >> op;
		switch (op) {
		case ('+') : {
			Sum(num1, num2);
			for (int i = 0; i < 100; i++) {
				num1[i] = 0;
				num2[i] = 0;
			}
			break;
		}
		case ('-') : {
			Min(num1, num2);
			for (int i = 0; i < 100; i++) {
				num1[i] = 0;
				num2[i] = 0;
			}
			break;
		}
		case ('*') : {
			Mul(num1, num2, ans);
			break;
		}
		case ('/') : {
			cout << "\nstill in Progress **** swear to God it was so hard :( ";
			cin.get();
			cin.get();
			break;
		}
		}
	}
}
