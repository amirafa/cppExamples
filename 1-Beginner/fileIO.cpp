#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream A;                      //output
	A.open("C:\\M.text");
	A << "Rahim";
	A.close();
	//_______________________________
	ifstream B;                      //input
	B.open("C:\\M.text");
	char Name[30];
	B >> Name;
	cout << Name;
	B.close();
	cin.get();
	cin.get();
}