#include <stdio.h>

class Simple {
private : 
	int value;
	static int count;

public :
	Simple() { count++; }
	~Simple() { count--; }
	void OutCount() { printf("count : %d\n", count); }
};0

int Simple::count = 0;

void main() {
	Simple s, * ps;
	s.OutCount();
	ps = new Simple;
	ps->OutCount();
	delete ps;
	s.OutCount(); 
	printf("Å©±â : %d\b", sizeof(s));
}