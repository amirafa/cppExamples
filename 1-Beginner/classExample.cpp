#include <iostream>
#include <stdlib.h>
using namespace std;

class Car {
protected:
	int size;
public:
	int GetSize() { return size; }
	void SetSize(int NewSize) { size = NewSize; }
};
class Pride:public Car {
protected:
	char Driver[10];
public:
	Pride(){}
//	Pride(int inSize,int inWheel,char *Name){}    //a kind of constructor
};
int main() {
	Pride *P = new Pride();
	P->SetSize(10);
	cout<<"Pride Size is: "<<P->GetSize();
	cin.get();
}