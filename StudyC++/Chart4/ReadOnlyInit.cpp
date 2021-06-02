#include <stdio.h>
#include <windows.h>

class Shape {
private:
	int shapeType;
	RECT shapeArea;
	COLORREF color;

public :
	static int scrx, scry;
	static void GetScreanSize();
};

int Shape::scrx;
int Shape::scry;

void Shape::GetScreanSize() {
	scrx = GetSystemMetrics(SM_CXSCREEN);
	scry = GetSystemMetrics(SM_CYSCREEN);
}

void main() {
	Shape::GetScreanSize();
	Shape C, E, R;
	printf("화면 크기 = {%d, %d}\n", Shape::scrx, Shape::scry);
}