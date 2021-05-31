#include <stdio.h>

struct Human
{
private :
	char name[20];
	int age;
public :
	void intro() {
		printf("이름 : %s, 나이 : %d\n", name, age);
	}
};

void main() {
	Human choi;
	choi.intro();
}