#include<iostream>
using namespace std;
void H(int n,char A,char B,char C) {
	if (n > 0) {
		H(n - 1, A, C, B);
		cout << A << "->" << B<<endl;
		H(n - 1, B, A, C);
	}
}
int main() {
	char A = 'A';
	char B = 'B';
	char C = 'C';
	H(3, A, B, C);
	cin.get();
}