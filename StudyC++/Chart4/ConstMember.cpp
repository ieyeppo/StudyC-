#include <stdio.h>

class MathCalc {
	const double pie;

public :
	MathCalc(double apie) : pie(apie) {}
	void DoCalc(double r) {
		printf("������ %.2f�� ���� �ѷ� : %.2f\n", r, r * r * pie);
	}
};

void main() {
	MathCalc m(3.141592);
	m.DoCalc(5);
}