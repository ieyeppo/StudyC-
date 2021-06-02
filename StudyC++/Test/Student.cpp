#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Student {
	const int id;
	int age;
	char name[20];
	char major[30];

public :
	Student(int _id, int _age, const char* _name, const char* _major):id(_id), age(_age)
	{
		strcpy(name, _name);
		strcpy(major, _major);
	}

	void showData() 
	{
		printf("ID : %4d\t", id);
		printf("���� : %dt", age);
		printf("�̸� : %s\t", name);
		printf("���� : %s\n", major);
	}
};

void main() 
{
	Student Choi(1001, 27, "������", "�İ�");
	Student Lee(2002, 22, "�̼���", "����");

	Choi.showData();
	Lee.showData();
}