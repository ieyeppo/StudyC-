#include <stdio.h>

class Time {
private:
	int hour, min, sec;

public :
	Time(int hour, int min, int sec) {
		this->hour = hour;
		this->min = min;
		this->sec = sec;
	}

	void OutTime() {
		printf("����ð� %d:%d:%d\n", hour, min, sec);
	}
};


void main() {
	Time now(12, 34, 56);
	Time then = now;

	then.OutTime();
}