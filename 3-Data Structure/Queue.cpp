#include<iostream>
using namespace std;
const int maxsize = 100;
class Queue {
private:
	int Q[maxsize];
	int f,e;
public:
	Queue() { e = f = -1; }
	bool isempty() { return f == e; }
	bool isfull() { return e == maxsize - 1; }
	void enQ(int x) {
		if (!isfull())  Q[++e] = x;
	}
	int deQ() {
		if (!isempty()) return Q[++f];
	}
	void show() {
		for (int i = 0; Q[i]; i++) cout << Q[i];
	}
};
