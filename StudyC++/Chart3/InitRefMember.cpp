#include <iostream>

using namespace std;

class Some {
public:
	int& total;
	Some(int& total) : total(total) {}
	void OutTotal() { cout << total << endl; }
};

void main() {
	int value = 8;
	Some S(value);
	S.OutTotal();
}