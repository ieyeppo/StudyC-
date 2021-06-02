#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class CTest {
private:
	int m_num;
	int* ptr;
public:
	CTest() { 
		m_num = 0; 
		ptr = &m_num;
		cout << "default Initialization" << endl; 
	}
	CTest(int num, int* ptr) { 
		m_num = num; 
		this->ptr = ptr;
	}
	CTest(CTest& other) { 
		this->m_num = other.m_num; 
		this->ptr = other.ptr;
	}
	void getData() { cout << m_num << endl; }
	~CTest() { delete ptr; }
};

void main() {
	int a = 10;
	int *b = &a;

	CTest c1();
	CTest c2(a, b);

	c2.getData();

	cout << b << endl;
}
