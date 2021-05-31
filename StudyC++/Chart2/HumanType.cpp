#include <stdio.h>

class Human {
public :
	char name[20];
	int age;

	void intro() {
		printf("이름 : %s, 나이 : %d\n", name, age);
	}
};

void main() {
	Human arFriend[10] = {
		{"최혀나", 27},
		{"이수인", 30},
		{"김민경", 30}
	};

	Human* pFriend;
	pFriend = &arFriend[1];
	pFriend->intro();
}