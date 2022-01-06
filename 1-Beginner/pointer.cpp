#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
/*class Student {

};*/

int main() {
	int *p,m, s; // int pointer p , int m , int s
	m = 5;       // m[5]
	p = &m;      //p[1000]   (1000 is adress of m)
	s = *p;      //s=5      s <- [p -> 5] => s <- 5
	cout << m << " " << s << " " << p;
	cin.get();
	cin.get();
}
