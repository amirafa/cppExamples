#include<iostream>
#include<stdlib.h>
using namespace std;

class Bank {
private:
	int Code;
	char Name[10];
	char Lastname[10];
public:
	void Get();
	void Print();
	void Sort();
	int GetCode() { return Code; }
};

Bank cl[10];
int ListCnt = 0;

void mPrint();
void Search();
int main() {
	char k;
	while (1) {
		cout << "\n1=input\n2=print\n3=sort\n4=search\n5=exit\n";
		cin >> k;
		switch (k) {
		case '1':cl[ListCnt].Get();
			break;
		case '2':mPrint();
			break;
		case '3':cl[ListCnt].Sort();
			break;
		case '4':Search();
			break;
		case '5':exit(0);
			break;
		}
	}
}

void Bank::Get()
{
	cout << "enter code  ";
	cin >> Code;
	cout << "enter name  ";
	cin >> Name;
	cout << "enter Last Name  ";
	cin >> Lastname;
	ListCnt++;
}

void Bank::Print()
{
	cout << Code << ": " << Name << "  " << Lastname << "\n";
}

void Bank::Sort() {
	Bank t;
	for (int i = 0; i < ListCnt; ++i)
		for (int j = 0; j < ListCnt-1; j++) {
			if (cl[j].Code > cl[j + 1].Code) {
				t = cl[j];
				cl[j] = cl[j + 1];
				cl[j + 1] = t;
				system("cls");
				cout << "sorted\n\n";
			}

		}
}

void mPrint() {
	system("cls");
	for (int i = 0; i < ListCnt; ++i) {
		cl[i].Print();
	}
}

void Search() {
	int Key;
	cout << "enter ur code= ";
	cin >> Key;
	int res = -1;
	for (int i = 0; i < ListCnt; ++i) {
		if (Key == cl[i].GetCode())  Key = i;
	}
	if (Key == -1) {
		system("cls");
		cout << "not Found";
	}
	else {
		system("cls");
		cl[Key].Print();
	}
}