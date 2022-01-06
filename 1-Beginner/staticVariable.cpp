#include <iostream>
#include <stdlib.h>
using namespace std;
void al() {
	static int a=0;
	cout << a;
	a+=2;
}
int main() {
	for (int i = 0; i < 10; i++)
		al();
	cin.get();
	cin.get();
}