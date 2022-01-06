#include<iostream>
#include<stdlib.h>
using namespace std;
class Bank
{
private:
	int a;
public:
	//Structor
	Bank() {
		cout << "hi Class(by Structor 'no Par')";
	}
	Bank(int c) {
		cout << "hi Class(by Structor 'par')";
	}
	//Destructor
	~Bank() { cout << "Bye Class(by Destructor)"; }
};
int main() {
	Bank *b = new Bank();
	cin.get();
/*	Bank *b = new Bank(40);
	cin.get(); */
	delete (b);
	cin.get();
}