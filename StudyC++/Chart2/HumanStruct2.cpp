#include <stdio.h>

struct Human
{
	char name[20];
	float height;
	float weight;
	int age;
	char blood;

	void intro()
	{
		printf("name : %s\n", name);
		printf("height : %.2lf\n", height);
		printf("weight : %.2lf\n", weight);
		printf("age : %d\n", age);
		printf("blood : %c\n", blood);
	}
};

void main() {
	Human my = { "ÃÖÇô³ª", 167.43, 53.44, 27, 'A' };
	my.intro();
}