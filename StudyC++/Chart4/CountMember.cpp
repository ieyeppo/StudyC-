#include <stdio.h>

class Simple {
private :
	int value;
	int count = 0;
public:
	Simple() { count++; }
	~Simple() { count--; }
	void OutCount() { printf("count : %d\n", count); }
};

void main() {
	Simple s, * ps;
	s.OutCount();
	ps = new Simple;
	ps->OutCount();
	delete ps;
	s.OutCount();
	printf("Å©±â : %d\n", sizeof(s));
}