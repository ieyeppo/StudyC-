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
		printf("�̸� : %s, ���� : %d\n", name, age);
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
		printf("Ű : %d, ������ : %d�� ���� %s�Դϴ�.\n", height, weight, name);
	}
	void fight() {
		puts("����Ʈ, ����Ʈ, µµ");
	}
};

void main() {
	Boxer kim("������", 29, 180, 65);
	kim.intro();
	kim.fight();
}