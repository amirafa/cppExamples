#include <iostream>
#include <stdlib.h>
using namespace std;
/*class Student {

};*/
void Input(int *, int *);
void Calc(int *, int *, int *, int *);
int main() {
	int a, b, p, A;
	Input(&a, &b);
	Calc(&a, &b, &p, &A);
	cin.get();
	cin.get();
}
void Input(int *p1, int *p2) {
	cout << "enter length and Width =\n";
	cin >> *p1 >> *p2;
}
void Calc(int *p1, int *p2, int *p3, int *p4) {
	*p3 = (*p1 + *p2) * 2;
	*p4 = *p1 * *p2;
	cout << "p " << *p3 << "  A " << *p4;
}