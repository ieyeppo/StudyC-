#include <iostream>

class Simple {
private :
	int value;
public :
	Simple(int avalue) :value(avalue) {}
	void OutValue() { printf("value=%d\n", value); }
};

void main() {
	Simple A(1), B(2);
	A.OutValue();
	B.OutValue();
}