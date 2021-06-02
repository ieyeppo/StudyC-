#include <iostream>

class StaticTest {
private:

public:
	int a;
	static int b;
	StaticTest() {
		a = 10;
		b++;
	}
	~StaticTest() {}

	void getData() {
		printf("a : %d\tb: %d\n", a, b);
	}
};

int StaticTest::b = 20;

void main() {
	StaticTest s1;
	s1.getData();
}