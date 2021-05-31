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
		printf("이름 : %s, 나이 : %d\n", name, age);
	}
};

void main() {
	Human choi("최혀나", 27);
	choi.intro();
}