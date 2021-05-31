#include <stdio.h>
#include <cursor.h>


class RandNum {
private :
	int num;

public :
	RandNum() { ran                                              domize(); }
	void Generate() { num = random(100) + 1; }
	bool Compare(int input) {
		if (input == num) {
			printf("O\n");
			return true;
		} 
		else if(input > num)
			printf("DOWNn\n");
		else printf("UP\n");

		return false;
	}
};

class Ask
{
private:
	int input;

public:
	void Prompt() { printf("\n숫자 맞추기\n"); }
	bool AskUser() {
		printf("num : ");
		scanf("%d", &input);
		if (input == 999) return true;
		return false;
	}
	int GetInput() { return input; }
};

void main() {
	RandNum R;
	Ask A;

	while (true) {
		R.Generate();
		A.Prompt();
		while (true) {
			if (A.AskUser()) return;
			if (R.Compare(A.GetInput())) break;
		}
	}
}