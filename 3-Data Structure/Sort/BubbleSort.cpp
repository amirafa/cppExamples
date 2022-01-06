#include <iostream>
using namespace std; 

void bsort(int a[],int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-i-1;j++)
			if (a[j]>a[j+1]) {
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
	}
}
int main() {
	int a[4] = { 1,3,2,4 };
	bsort(a, 4);
	for (int i = 0;i<4; i++) {
		cout << a[i];
	}
	cin.get();
}