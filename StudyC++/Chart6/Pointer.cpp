#include <iostream>

using namespace std;

class A 
{
public :
	void AFunc() {
		cout << "A::Func()" << endl;
	}
};

class B : public A
{
public :
	void BFunc() {
		cout << "B::Func()" << endl;
	}
};

class C : public B
{
public:
	void CFunc() {
		cout << "C::CFunc()" << endl;
	}
};

void main() {
	//���� Ŭ����Ÿ���� �����Ͱ� �Ļ���ü�� ����Ű�� �ִ�.
	A* pa = new C;
	pa->AFunc();

	B* pb = new C;
	pb->AFunc();
	pb->BFunc();

	C* pc = new C;
	pc->AFunc();
	pc->BFunc();
	pc->CFunc();
}