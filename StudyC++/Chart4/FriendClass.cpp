#include <iostream>

using namespace std;

class Time {
	friend class Date;

private :
	int hour, min, sec;

public :
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
};

class Date {
private :
	int year, month, day;
public :
	Date(int y, int m, int d) { year = y; month = m; day = d; }
	void OutToday(Time& t) {
		printf("%d³â %d¿ù %dÀÏ %d:%d:%d\n", d.year, d.month, d.day, t.hour, t.min, t.sec);
	}
};

void main() {
	Date d(2021, 03, 01);
	Time t(12, 34, 56);
	d.OutToday(t);
}