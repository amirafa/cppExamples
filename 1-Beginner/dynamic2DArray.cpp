#include<iostream>
using namespace std;
int main(){
	int r, c;
	int **p;
	cout << "enter row , enter column:\n";
	cin >> r >> c;
	p = new int *[c];
	for (int i = 0; i < r; i++) {
		p[i] = new int[c];
	}
	cout << "enter ur nums:\n";
	for (int j = 0; j < r; j++) {
		for (int k = 0; k < c; k++) {
			cin>> p[j][k];
		}
	}
	cout << "your matris is:\n";
	for (int l = 0; l < r; l++) {
		for (int m = 0; m < c; m++) {
			cout << p[l][m];
		}
		cout << "\n";
	}
	cin.get();
	cin.get();
}
