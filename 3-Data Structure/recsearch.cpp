#include <iostream>
#include <stdlib.h>
using namespace std;
int recs(int a[],int x,int l,int u) {
	if (l > u)return -1;
	else {
		int mid = (l + u) / 2;
		if (a[mid] == x)return mid;
		else if (a[mid] < x)return recs(a, x, mid + 1, u);
		else return recs(a, x, l, mid - 1);
	}

}

int main() {
	int a[7] = { 1,3,5,7,10,18,20 };
	int x = 10;
	cout<<recs(a, x, 0, 6);
	cin.get();
}