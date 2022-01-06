#include <iostream>
#include <stdlib.h>
using namespace std;
//fact class
class Fact {
public:
	int fact(int a) {
		if (a != 0)
			return (a * fact(a - 1));
		return 1;	}
};
//Fibonacci class
class Fib {
public:
	int fib(int a) {
		if (a == 0 || a == 1) return a;
		else
		return fib(a - 1) + fib(a - 2);
	}
};

int main() {
	//fact 5
	Fact a;
	cout<<"fact 5= "<<a.fact(5);
	//10 fib
	Fib b;
	cout <<"\n\n10 fib= ";
	for (int i = 0; i < 10;i++)
	cout<<"\n"<<b.fib(i);
	cin.get();
	cin.get();

}