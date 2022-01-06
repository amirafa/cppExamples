#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int strlen(string s) {
	int i;
	for (i = 0; s[i]; i++);
	return i;
}
void binary(string s,int n) {
	if (strlen(s) > n) {}
	else {
		string a = "00";
		string b = "1";
		for (int j = 0; s[j]; j++) cout << s[j];
		cout << " ";
		binary(s+a, n);
		binary(s+b, n);
	}
}

int main() {
	string s = "";
	binary(s, 3);
	cin.get();
}