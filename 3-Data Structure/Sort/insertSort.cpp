#include <iostream>
using namespace std; 

void insertSort(int a[],int n) {
	int value,pivot;
	for (int i = 1; i < n; i++) {
		value = a[i];
		pivot = i - 1;
		while (a[pivot] > value && pivot >= 0) {
			a[pivot + 1] = a[pivot];
			pivot--;
		}
		a[pivot + 1] = value;
	}
}
int main() {
	int a[4] = { 4,3,2,1 };
	insertSort(a, 4);
	for (int i = 0;i<4; i++) {
		cout << a[i];
	}
	cin.get();
}