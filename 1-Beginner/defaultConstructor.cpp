#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
class Student {
private:
	string courseName;
public:
	Student() {}
	Student(string a) { setCourseName(a); }
	string getCourseName() { return courseName; }
	void setCourseName(string a);
	void showCourseName();
};
void Student::setCourseName(string a) {
	courseName = a;
}
void Student::showCourseName() {
	cout << getCourseName()<<endl;
}
int main() {
	string course;
	Student c1("C++");
	Student c2("C#");
	Student c3;
	cout << "enter Course Name= ";
	getline(cin, course);
	c3.setCourseName(course);
	cout << "all is:\n------------\n";
	c1.showCourseName();
	c2.showCourseName();
	c3.showCourseName();
	cin.get();
}
