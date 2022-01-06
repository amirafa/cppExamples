#include <iostream>
using namespace std;
//______________________________________________________________Array_________
template <typename T>
class array1D {
	int size;
	T *p;
public:
	array1D(int x, T defa) {
		size = x;
		p = new T[size];
		for (int i = 0; i < size; i++) p[i] = defa;
	}
	void Print() {
		for (int i = 0; i < size; i++) cout << p[i];
	}
};
//___Main___
//array1D  <char> a1(3, 'd'); or array1D  <int> a1(3,4);    

//______________________________________________________________2Darray_______
class Array {
	friend ostream &operator<<(ostream&, Array&);
	friend istream &operator>>(istream&, Array&);
private:
	int R, C;
	int **p;
	int defNum;
public:
	Array(int r, int c, int def) {
		R = r; C = c; defNum = def;
		p = new int*[R];
		for (int i = 0; i < R; i++) p[i] = new int[C];
		for (int j = 0; j < R; j++)
			for (int k = 0; k < C; k++) p[j][k] = defNum;
	}
	int getCell(int r, int c) {
		return p[r][c];
	}

	//[] Overloading (1D)
	int operator[](int x) {
		return p[x][0];
	}

	void setCell(int r, int c, int x) {
		p[r][c] = x;
	}
	void Print() {
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				cout << p[i][j];
			}
			cout << "\n";
		}
	}
};
//cout Overloading
ostream &operator<<(ostream &x, Array &a) {
	for (int i = 0; i < a.R; i++) {
		for (int j = 0; j < a.C; j++) {
			x << a.p[i][j];
		}
		x << "\n";
	}
	return x;
}
//cin Overloading
istream &operator>>(istream &x, Array &a) {
	for (int i = 0; i < a.R; i++)
		for (int j = 0; j < a.C; j++) x >> a.p[i][j];
	return x;
}
//________________________________________________________________Const________
class Const {
	const int a;
public:
	Const(int x) :a(x)
	{
		//		a = 3;    wrong
	}
	void Print() const{
		cout << a;
	}
};
//________________________________________________________________Static_______
class Static {
public:
	static int a;
	static void f() {
		a++;
	}
	void Print() {
		cout << a;
	}
};
//int Static::a = 11;     //initial static var
//___MAin___
//  Static::f();           //call  static fn

//_______________________________________________________________Time + Date___
class Time {
public:
	int s, m, h;
	Time() {}
	Time(int x, int y, int z) {
		s = x;
		m = y;
		h = z;
	}
};
class Date {
	friend bool operator !=(Date, Date);
public:
	int d, m, ye;
	Time t;
	Date(int x, int y, int z, int a, int b, int c) :t(a, b, c) {
		d = x;
		m = y;
		ye = z;
	}
	Date(int x, int y, int z) {
		d = x;
		m = y;
		ye = z;
	}
	//Operator > Overloading inClass (suggested)
	bool operator>(Date d1) {
		if (ye > d1.ye) return true;
		else if (ye == d1.ye && m > d1.m) return true;
		else if (ye == d1.ye && m == d1.m && d > d1.d) return true;
		else return false;
	}
	bool operator==(Date d1) {
		if (ye == d1.ye && m == d1.m && d == d1.d) return true;
		return false;
	}

	//inClass Overloading (not suggested)
	int equality(Date d2) {
		if (d2.d == d) return 1;
		else return 0;
	}
	void Print() {
		cout << d << m << ye;
		cout << t.s << t.m << t.h;
	}
};
bool operator !=(Date d1, Date d2) {
	return !(d1 == d2);
}
//Fntional Operator Overloading (not suggested)
int equality(Date d1, Date d2) {
	if (d1.d == d2.d) return 1;
	else return 0;
}
//_____________________________________________________________2D + Cyrcle_____
class Shape {
protected:
	int x, y, color;
public:
	Shape() {}
	Shape(int a, int b, int c) {
		x = a; y = b; color = c;
	}
	virtual void Print() {
		cout << x << y << color;
	}
};
class Cyrcle :public Shape {
	int r;
public:
	Cyrcle(int a, int b, int c, int d) :Shape(b, c, d) {
		r = a;
	}
	void Print() {
		cout << r;
		Shape::Print();
	}
};
//____Main____
//Shape s(1, 2, 3);
//Cyrcle c(4, 5, 6, 7);
//Shape *p[2];
//p[0] = &s;
//p[1] = &c;
//p[0]->Print();
//p[1]->Print();

//________________________________________________________________Main_________
int main() {
	Date d1(2, 3, 4);
	Date d2(3, 3, 4);
	if (d1 == d2)cout << "yes";
	else cout << "no";
	cin.get();
	cin.get();
}