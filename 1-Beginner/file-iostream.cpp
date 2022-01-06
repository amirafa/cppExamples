#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

struct Student {
	int Code;
	char Name[30];
	char LastName[35];
};

char FileName[30];
fstream p;
Student St;
void GetFilePath();
void WriteStudent();
void PrintStudent();
void GetStudent();
int SearchStudent(int id);

int main() {
	GetFilePath();
	char ch;
	while (1) {
		cout << "\n 1=ChangePath 2=Input 3=Print 7=Exit";
		cin >> ch;
		switch (ch) {
		case '1':GetFilePath();
			break;
		case '2':WriteStudent();
			break;
		case '3':PrintStudent();
			break;
		case '7':exit(0);
			break;
		}

	}

}
void GetFilePath(){
	cout << "enter File Path= ";
	cin >> FileName;
}
void GetStudent() {
	cout << "enter Code= ";
	cin >> St.Code;
	cout << "enter Name= ";
	cin >> St.Name;
	cout << "enter LastName= ";
	cin >> St.LastName;
	while (SearchStudent(St.Code) != -1) {
		cout << "Code Exist ,New Code";
		cin >> St.Code;
	}
}
void WriteStudent(){
	GetStudent();
	p.open(FileName, ios::in | ios::out | ios::binary);
	p.seekp(sizeof(struct Student)*St.Code,ios::beg);
	p.write((char *)&St, sizeof(struct Student));
	p.close();
}
void PrintStudent() {
	Student TempSt;
	p.open(FileName, ios::in | ios::out | ios::binary);
	p.read((char*)&TempSt, sizeof(struct Student));
	while (!p.eof()) {
		if (TempSt.Code != 0)
			cout << TempSt.Code << ": " << TempSt.Name << " " << TempSt.LastName<<endl;
		    p.read((char *)&TempSt, sizeof(struct Student));
	}
	p.close();
}
int SearchStudent(int id) {
	Student TempSt;
	int key = -1;
	p.open(FileName, ios::in | ios::out | ios::binary);
	p.seekg(sizeof(struct Student)*id, ios::beg);
	p.read((char*)&TempSt, sizeof(struct Student));
	p.close();
	if (TempSt.Code == 0)
		return key;
	 return id;

}