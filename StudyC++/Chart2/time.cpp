#include <stdio.h>

class Time {
private:
	int hour, min, sec;

public :
	void SetTime(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}

	void OutTime() {
		printf("����ð��� %d:%d:%d�Դϴ�.\n", hour, min, sec);
	}
};

void main() {
	Time now;

	now.SetTime(10, 36, 52);
	now.OutTime();
}