#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

class Human {
protected:
	char name[12];
	int age;

public :
	Human(const char* name, int age) {
		strcpy(this->name, name);
		this->age = age;
	}

	void intro() {
		printf("이름 : %s, 나이 : %d\n", name, age);
	}
};

class Boxer : public Human {
protected :
	int height;
	int weight;

public:
	Boxer(const char* name, int age, int height, int weight) :Human(name, age) {
		this->height = height;
		this->weight = weight;
	}
	void intro() {
		printf("키 : %d, 몸무게 : %d의 복서 %s입니다.\n", height, weight, name);
	}
	void fight() {
		puts("레프트, 라이트, 쨉쨉");
	}
};

void main() {
	Boxer kim("최혀나", 29, 180, 65);
	kim.intro();
	kim.fight();
}