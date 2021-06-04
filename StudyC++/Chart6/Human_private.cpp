#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Human {
private:
	char* name;
public :
	Human(const char* name) {
		int len = strlen(name) + 1;
		this->name = new char[len];
		strcpy_s(this->name, len, name);
	}
	~Human() { delete[] name; }

	void printName() { cout << "�̸� : " << name << endl; }
	char* getName() { return name; }
};

class Student : Human {
private:
	char* major;
public :
	Student(const char* name = "Xman", const char* major = "Xmajor") : Human(name) {
		this->major = new char[strlen(major) + 1];
		strcpy(this->major, major);
	}
	~Student() { delete[] major; }

	void printMajor() { 
		cout << "�̸� : " << getName() << "\t\t";
		cout << "���� : " << major << endl; 
	}
};

void main() {
	Human my("����ȭ");
	my.printName();

	Student s("HYUN HWA", "IoT"), s2;
	s.printMajor();
	s2.printMajor();
}