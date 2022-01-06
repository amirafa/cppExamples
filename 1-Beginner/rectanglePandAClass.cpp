#include <iostream>
#include <stdlib.h>

using namespace std;

class rec {
	float length, width,P,S;
public:
//	float Getl() { return length; }
//	float Getw() { return width; }
	void Setlw(float a, float b) { length = a; width = b; }
	void Calc();
	void Show();
};
void rec::Calc(){
	P = (length + width) * 2;
	S = length*width;
}
void rec::Show() {
	cout << "prime= " << P << "\nArea= " << S;
}
rec a;
float main() {
	int l, w;
	cout << "enter Length and Width= ";
	cin >> l >> w;
	a.Setlw(l, w);
	a.Calc();
	a.Show();
	cin.get();
	cin.get();
}
