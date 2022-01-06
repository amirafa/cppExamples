const int maxsize = 100;
class stack {
private:
	int s[maxsize];
	int top;
public:
	stack() { top = -1; }
	bool isempty() { return top == -1; }
	bool isfull() { return top == maxsize - 1; }
	void push(int x) {
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