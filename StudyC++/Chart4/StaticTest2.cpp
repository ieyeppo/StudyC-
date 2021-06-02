#include <iostream>

class StaticTest {
	static int a;
	int b;
public :
	StaticTest();;
	static void setData(int);
	void getData();
};

StaticTest::StaticTest() {
	b = 20;
}

int StaticTest::a = 10;

void StaticTest::getData() {
	printf("a : %d\tb: %d\n", a, b);
}

void StaticTest::setData(int data) {
	a = a;
}

void main() {
	StaticTest s1, s2;
	s1.getData();
	s2.setData(30);
	s2.getData();

	StaticTest::setData(40);
	s1.getData();
	s2.getData();
}