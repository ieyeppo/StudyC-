#include <stdio.h>

class Human
{
public :
	char name[20];
	int age;

	void intro() {
		printf("�̸� : %s, ���� : %d\n", name, age);
	}
};

void main() {
	Human choi = { "������", 27 };
	choi.intro();
}