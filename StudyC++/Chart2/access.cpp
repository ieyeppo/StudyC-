#include <stdio.h>

struct Human
{
private :
	char name[20];
	int age;
public :
	void intro() {
		printf("�̸� : %s, ���� : %d\n", name, age);
	}
};

void main() {
	Human choi;
	choi.intro();
}