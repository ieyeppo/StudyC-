#include <stdio.h>

class Simple {
private :
	int value;
	static int count;

public :
	Simple();
	~Simple();
	static void InitCount();
	static void OutCount();
};

Simple::Simple() {
	count++;
}

Simple::~Simple() {
	count--;
}

void Simple::InitCount() {
	count = 0;
}

int Simple::count;

void Simple::OutCount() {
	printf("count : %d\n", count);
}

void main() {
	Simple::InitCount();
	Simple::OutCount();
	Simple s, * ps;
	ps = new Simple;
	Simple::OutCount();
	delete ps;
	Simple::OutCount();
	printf("Å©±â : %d\n", sizeof(s));
}