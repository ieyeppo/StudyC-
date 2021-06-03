#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Grades {
private :
	int kor, eng, math;
	int sum;
	double avg;

public:
	Grades(int kor, int eng, int math) {
		this->kor = kor;
		this->eng = eng;
		this->math = math;

		sum = kor + eng + math;
		avg = sum / 3;
	}

	void printfGrades() {
		printf("���� : %d, ���� : %d, ���� : %d\n", kor, eng, math);
		printf("�հ� : %3d, ��� : %.2f\n\n", sum, avg);
	}
};

class Human {
private :
	char* name;
	int age;
	Grades* grades;

public :
	Human(const char* name = "Xman", int age = 90) {
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;
		this->grades = grades;
		
	}

	Human(Human* who) {
		this->name = new char[strlen(who->name) + 1];
		strcpy(this->name, who->name);
		this->age = who->age;
		this->grades = who->grades;
	}

	~Human() { delete name; }

	void printHuman() {
		printf("�̸� : %s, ���� : %2d\n", name, age);
	}

	Grades* getGrades() {
		return grades;
	}
	
	void setGrades(Grades* grades) {
		this->grades = grades;
	}
};

void main() {
	Grades g1(100, 90, 80), g2(67, 24, 46), g3(88, 71, 84);
	Human choi("������", 27);
	choi.setGrades(&g1);
	Human youH(choi);
	Human Xman;
	Xman = choi;

	choi.printHuman();
	choi.getGrades()->printfGrades();

	youH.printHuman();
	youH.setGrades(&g2);

	Xman.printHuman();
}