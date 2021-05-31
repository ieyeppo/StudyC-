#include <stdio.h>

class Human
{
public :
	char name[20];
	int age;

	void intro() {
		printf("이름 : %s, 나이 : %d\n", name, age);
	}
};

void main() {
	Human choi = { "최혀나", 27 };
	choi.intro();
}