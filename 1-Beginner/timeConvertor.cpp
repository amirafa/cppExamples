#include <iostream>
#include <stdlib.h>
using namespace std;
class time {
private:
	int sec, min, hour;
public:
	void SetTime(int, int, int);
	void Print();
};
void time::SetTime(int a, int b, int c) {
	int temp = a;
	if (((temp / 12) % 2) == 0) cout << "___*AM___\n"; else cout << "___*PM___\n";
	hour = (a < 12 ? a : ((a>12 && (a / 12) % 2 == 0 && (a % 12) == 0) ? 0 : ((a / 12) % 2 != 0 && (a % 12) == 0) ? 12 : a % 12));
	min = ((b > 60 || b <= 0) ? (b - (b / 60) * 60) : b);
	if (b < 60 || b >= 0) hour = (hour + (b / 60));
	sec = ((c > 60 || c <= 0) ? (c - (c / 60) * 60) : c);
	if (c < 60 || c >= 0) min += (c / 60);
	int day = (temp / 24) + 1;
	cout << "Day = " << day << ((day == 1) ? "st" : ((day == 2) ? "nd" : "th")) << "\n";
}
void time::Print() {
	cout << hour << " : " << min << " : " << sec << "\n";
}
int main() {
	time a;
	while (1) {
		cout << "enter ur Time=(hour -> minute -> second ->\n";
		int x, y, z;
		cin >> x >> y >> z;
		a.SetTime(x, y, z);
		a.Print();
		cin.get();
		cin.get();
		system("cls");
	}
}
