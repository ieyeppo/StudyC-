#include <stdio.h>
#include <string.h>

class Human {
private:
	char name[20];
	int age;
public :
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}
	void intro() {
		printf("�̸� : %s, ���� : %d\n", name, age);
	}
};

void main() {
	Human choi("������", 27);
	choi.intro();
}