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
	if (strlen(s) == n)
	{
		for (int j = 0; s[j]; j++) cout << s[j];
		cout << " ";
	}
	else {
		string a = "0";
		string b = "1";
		binary(s+a, n);
		binary(s+b, n);
	}
}

int main() {
	string s = "";
	binary(s, 3);
	cin.get();
}