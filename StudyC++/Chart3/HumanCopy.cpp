#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

class Human {
private:
	char* pname;
	int age;

public :
	Human(const char* aname, int aage) {
		pname = new char[strlen(aname) + 1];
		strcpy(pname, aname);
		age = aage;
	}

	~Human() {
		delete[] pname;
	}

	void intro() {
		printf("이름 : %s, 나이 : %d\n", pname, age);
	}
};

void main() {
	Human choi("최혀나", 27);
	Human boy = choi;

	boy.intro();
}