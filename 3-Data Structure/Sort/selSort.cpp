#include <iostream>
using namespace std; 

void selSort(int a[],int n) {
	int max, index;
	for (int i = 0; i < n; i++) {
	    max = a[i];
	    index = i;
		for (int j = i + 1; j < n;j++)
			if (a[j]>max) {
				max = a[j];
				index = j;
			}
		a[index] = a[i];
		a[i] = max;
	}
}
int main() {
	int a[4] = { 1,2,3,4 };
	selSort(a, 4);
	for (int i = 0;i<4; i++) {
		cout << a[i];
	}
	cin.get();
}