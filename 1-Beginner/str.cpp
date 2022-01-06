#include <iostream>
#include <stdlib.h>
using namespace std;
//____________globals__________________
char str[30];
char instr[10];
//place for insert
int subp;
//_____________Signs_________________
int strlen(char*);
int search(char*);
int delet(char*);
void insert(char*, int);
void replace(char*, char*);
//_______________Main_________________
int main() {
	cout << "Enter a String: ";
	cin >> str;
	while (1) {
		char key;
		cout << "\n__________";
		cout << "\n1=len \n2=search \n3=del \n4=insert \n5=replace \n6=exit\n\n";
		cin >> key;
		switch (key) {
		case ('1') : {
			int a = strlen(str);
			cout << a;
			//for clrscr
			cin.get();
			cin.get();
			system("cls");
		}
					 break;
		case ('2') : {
			cout << "substring u search for: ";
			cin >> instr;
			int b = search(instr);
			cout << str << " >> " << "it begins From letter: ";
			if (search(instr) != -1 && b <= strlen(str) - 1) cout << b + 1;
			else cout << "not found";

			//for clrscr
			cin.get();
			cin.get();
			system("cls");
		}
					 break;
		case ('3') : {
			cout << "string for Deleting: ";
			cin >> instr;
			int b = delet(instr);

			//for clr		
			cin.get();
			cin.get();
			system("cls");
			break;
		}
		case('4') : {
			cout << "substring u add: ";
			cin >> instr;
			cout << "add From array : " << "(" << str << ") ";
			cin >> subp;
			insert(instr, subp);

			//for clr		
			cin.get();
			cin.get();
			system("cls");
			break;
		}
		case('5') : {
			char substr[10];
			char instr[10];
			cout << "string for Replacing: ";
			cin >> substr;
			cout << "Replace with: ";
			cin >> instr;
			replace(substr, instr);
			//for clr		
			cin.get();
			cin.get();
			system("cls");
			break;
		}
		case('6') : exit(0);
			break;
		}
	}//end while
	cin.get();
	cin.get();
}

//_______________Fns__________________
int strlen(char s[]) {
	int i;
	for (i = 0; s[i]; i++);
	return i;
}
//__________________
int search(char a[]) {
	int alen = strlen(a);
	int i, j;
	for (i = 0; str[i]; i++) {
		if (str[i] == a[0]) {
			for (j = 0; j < alen; j++) {
				if (str[j + i] == a[j])
					continue;
				else
					break;
			}
			if (j == alen)
				return i;
			else return -1;
		}

	}
}
//_________________
int delet(char a[]) {
	int alen = strlen(a);
	int strglen = strlen(str);
	int i, j, k;
	for (i = 0; str[i]; i++) {
		if (str[i] == a[0]) {
			for (j = 0; j < alen; j++) {
				if (str[j + i] == a[j]) {
					continue;
				}
				else
					break;
			}
			if (j == alen) {
				for (k = (i + alen); k < strglen + alen; k++) {
					str[k - alen] = str[k];
					str[k] = 0;
				}
			}
		}

	}
	cout << "new string is: " << str;
}
//_____________
void insert(char a[], int x) {
	char t[30];
	int alen = strlen(a);
	int strglen = strlen(str);
	int i = 0, j = 0, k = 0, l = 0;
	for (k = 0; k < strglen; k++) {
		t[k] = str[k];
		t[k + alen] = '\0'; //!
	}
	for (int j = 0; j < alen; j++) {
		str[x + j] = a[j];
		str[x + j + alen] = '\0';
	}
	str[x + alen] = t[x];
	cout << str;
	for (l = x + 1; l < strglen; l++) {
		cout << t[l];
	}
}
//________
void replace(char a[], char b[]) {
	char t[30];
	int alen = strlen(a);
	int blen = strlen(b);
	int strglen = strlen(str);
	int i, j, k, l, m;
	for (k = 0; k < strglen; k++) {
		t[k] = str[k];
		t[k+alen] = '\0'; //!
	}
	for (i = 0; str[i]; i++) {
		if (str[i] == b[0]) {
			for (j = 0; j < blen; j++) {
				if (str[j + i] == b[j])
					continue;
				else
					break;
			}
			if (j == blen)
				for (l = 0; l < alen; l++) {
					str[l+i] = a[l];
				}
			str[i + alen] = '\0';
			cout << str;
			for (m = i+blen ; m <strglen ; m++) 
				cout << t[m];
		}

	}
}

