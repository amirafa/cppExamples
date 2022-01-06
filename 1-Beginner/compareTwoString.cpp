#include <iostream>
#include <stdlib.h>
using namespace std;
class cmp {
private:
	char st1[20], st2[20];
public:
	void input();
	void comp();
};

void cmp::input() {
	cout << "enter 1st str  ";
	cin >> st1;
	cout << "enter 2nd str  ";
	cin >> st2;
}
void cmp::comp() {
	for (int i = 0; st1[i]; i++) {
		if (st1[i] == st2[i])
			continue;
		else {
			cout << "dif: " << i + 1;
			cin.get();
			cin.get();
			exit(0);
		}
	}
	cout << "\n are equal";
	cin.get();
	cin.get();
}
int main() {
	cmp c1;
	c1.input();
	c1.comp();
}