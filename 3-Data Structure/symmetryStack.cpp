#include<iostream>
using namespace std;
const int maxsize = 100;
class stack {
private:
	int s[maxsize];
	int top;
public:
	stack() { top = -1; }
	bool isempty() { return top == -1; }
	bool isfull() { return top == maxsize - 1; }
	int push(int x) {
		if (isfull()) return -1;
		else s[++top] = x;
	}
	int pop() {
		if (isempty()) return -1;
		else return s[top--];
	}
	void show() {
		for (int i = 0; s[i]; i++) cout << s[i];
	}
};
//______________
int main() {
	string s = "aliila";
	int n = 6;
	stack st;
	int i;
	for (i = 0; i < (n / 2); i++)
		st.push(s[i]);
	while (!st.isempty()) {
		if (st.pop() != s[i]) {
			cout << "false";
			cin.get();
		}
		else i++;
	}
	system("cls");
	cout<<"true";
	cin.get();
	cin.get();
}