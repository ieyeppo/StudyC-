#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

class Human {
private:
	char * name;
	int age;

public :
	Human(const char* name, int age) {
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;
	}

	Human(const Human &other) {
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
		age = other.age;
	}

	~Human() {
		delete[] name;
	}

	void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

void printHuman(Human who) {
	who.intro();
}

void main() {
	Human choi("최혀나", 27);
	Human girl = choi;

	printHuman(girl);
}