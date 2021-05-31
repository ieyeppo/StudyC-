#include <stdio.h>

struct Human
{
	char name[20];
	float height;
	float weight;
	int age;
	char blood;
};

void IntroHuman(Human who)
{
	printf("name : %s\n", who.name);
	printf("height : %.2lf\n", who.height);
	printf("weight : %.2lf\n", who.weight);
	printf("age : %d\n", who.age);
	printf("blood : %c\n", who.blood);
}

void main() {
	Human my = { "ÃÖÇô³ª", 167.43, 53.44, 27, 'A' };
	IntroHuman(my);
}