#include <stdio.h>

class Human {
public :
	char name[20];
	int age;

	void intro() {
		printf("�̸� : %s, ���� : %d\n", name, age);
	}
};

void main() {
	Human arFriend[10] = {
		{"������", 27},
		{"�̼���", 30},
		{"��ΰ�", 30}
	};

	Human* pFriend;
	pFriend = &arFriend[1];
	pFriend->intro();
}