#include <iostream>
#include "node.h"
#include "BST.h"
using namespace std;

int main() {
	int data;
	BST b1;
	while (1) {
		system("cls");
		cout << "\n\n________________MENU__________________";
		cout << "\n\np:Print  a:add  d:delete  s:search  :\n\n";
		char c;
		cin >> c;
		switch (c) {
		case 'p':
			cout << "\n_______SHOW__________\n";
			b1.Print();
			cin.get();
			cin.get();
			break;
		case 'a':
			cout << "\nenter data : ";
			cin >> data;
			b1.add(data);
			break;
		case 's':
			cout << "\nenter data : ";
			cin >> data;
			b1.search(data);
			cin.get();
			cin.get();
			break;
		case 'd':
			cout << "\nenter data : ";
			cin >> data;
			b1.Deldata(data);
			break;
		}
	}
}
