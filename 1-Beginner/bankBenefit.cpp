#include <iostream>
#include <stdlib.h>

using namespace std;

float Calc(float,float,int);

int main() {
	float balance, rate;int mon;
	cout << "Balance , Rate , Month \n";
	cin >> balance >> rate >> mon;
	cout << "benefit= " << Calc(balance, rate, mon) << "\n Sum= " << balance + Calc(balance, rate, mon);
	cin.get();
	cin.get();
}
//________
float Calc(float a, float b, int c) {
	float sben=0, ben;                     //Sum of Benefit  ,  Benefit
	for (int i = 0; i < c; i++) {
		ben = a*(b / 100);
		a = a + ben;
		sben += ben;                      //sben=ben+sben
	}
	return sben;
}