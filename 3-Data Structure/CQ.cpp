#include<iostream>
using namespace std;
const int maxsize = 100;
class CQ {
private:
	int Q[maxsize];
	int f,e;
public:
	CQ() { e = f = -1; }
	bool isempty() { return f == e; }
	bool isfull() { return (e + 1) % maxsize == f; }
	void enQ(int x) {
		if (!isfull())  Q[(e+1)%maxsize] = x;
	}
	int deQ() {
		if (!isempty()) return Q[(f+1)%maxsize];
	}
	void show() {
		for (int i = 0; Q[i]; i++) cout << Q[i];
	}
};
