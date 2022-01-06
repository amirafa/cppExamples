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
	string s = "ali";
	stack st;
	for (int i = 0; s[i]; i++) st.push(s[i]);
	for (int k = 0; s[k]; k++) s[k] = st.pop();
	for (int j = 0; s[j];j++) cout << s[j];
	cin.get();
}