#include <iostream>
#include <stdlib.h>
using namespace std;
//Class______
class Student {
 private:
	int Code;
	char Name[20];
	char Last[20];
 public:
	 void GetSt();
	 void ShowSt();
};

void Student::GetSt()
{
	cout << "enter code: ";
	cin >> Code;
	cout << "enter name: ";
	cin >> Name;
	cout << "enter last: ";
	cin >> Last;
}

void Student::ShowSt()
{
	cout << Code << " " << Name << " " << Last;
}
int main() {
	Student *s=new Student;
	s.GetSt();
	s.ShowSt();
	cin.get();
	cin.get();
}