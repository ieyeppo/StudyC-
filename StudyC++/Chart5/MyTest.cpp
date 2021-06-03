#include <iostream>

class MyTest {
	//operator 사용시
	friend const MyTest operator +(const MyTest& me, const MyTest& other);
	friend const MyTest operator -(const MyTest& me, const MyTest& other);

private :
	int x;
	int y;
public:
	MyTest() {}
	MyTest(int _x, int _y) { x = _x; y = _y; }

	//sum 함수 사용시
	const MyTest sum(const MyTest& other) const {
		MyTest m;
		m.x = x + other.x;
		m.y = y + other.y;

		return m;
	}

	MyTest(MyTest& rhs) :x(rhs.x), y(rhs.y) {
		printf("복사생성자 호출\n");
	}

	const MyTest& operator = (const MyTest& other) const {
		x = other.x;
		y = other.y;
		return *this;
	}

	void printData() {
		printf("x:%d, y:%d\n", x, y);
	}
};

//operator +
const MyTest operator +(const MyTest& me, const MyTest& other) {
	MyTest m;
	m.x = me.x + other.x;
	m.y = me.y + other.y;

	return m;
}

//operator -
const MyTest operator -(const MyTest& me, const MyTest& other) {
	MyTest m;
	m.x = me.x - other.x;
	m.y = me.y - other.y;

	return m;
}


void main() {
	MyTest m1(10, 20);
	MyTest m2(50, -100);
	MyTest m3, m4, m5;

	m3 = m1.sum(m2);		//sum 함수 사용시
	m3 = m1 + m2;			//operator +
	m4 = m2 - m1;			//operator -
	m5 = m1.operator=(m2);	//operator =
	m3.printData();
}