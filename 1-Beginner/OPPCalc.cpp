#include <iostream>
#include <stdlib.h>
using namespace std;
class Calc {
private:
	int Number1;
	int Number2;
public:
	int GetNumber1() { return Number1; }
	void SetNumber1(int NewNum) { Number1 = NewNum; }
	int GetNumber2() { return Number2; }
	void SetNumber2(int NewNum) { Number2 = NewNum; }
	int Sum() { return Number1 + Number2; }
	int Mul() { return Number1 * Number2; }
	int Min() { return Number1 - Number2; }
	float Div() { return Number1 / (float)Number2; }
	Calc (){}
};

Calc *C = new Calc();

void Input();
int main() {
	char ch;
	while (1) {
		cout << "1=input 2=+ 3=* 4=- 5=/";
		cin>>ch;
		switch (ch) {
		case '1':Input();
			break;
		case '2':cout << C->Sum(); cin.get(); cin.get(); system("cls");
			break;
		case '3':cout << C->Mul(); cin.get(); cin.get(); system("cls");
			break;
		case '4':cout << C->Min(); cin.get(); cin.get(); system("cls");
			break;
		case '5':cout << C->Div(); cin.get(); cin.get(); system("cls");
			break;
		
		}
	}
}
void Input() {
	int T;
	cout << "Number1= ";
	cin >> T;
	C->SetNumber1(T);
	cout << "Number2= ";
	cin >> T;
	C->SetNumber2(T);
}