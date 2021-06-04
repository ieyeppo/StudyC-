#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Product {
private :
	char name[64];
	char company[32];
	int price;

	class Date {
	protected:
		int year, month, day;
	public:
		Date(int y, int m, int d) { year = y; month = m; day = d; }
		void OutDate() { printf("%d/%d/%d", year, month, day); }
	};
	Date validto;

public:
	Product(const char* name, const char* company, int y, int m, int d, int price) : validto(y, m, d) {
		strcpy(this->name, name);
		strcpy(this->company, company);
		this->price = price;
	}
	void OutProduct() {
		printf("이름 : %s\n", name);
		printf("제조사 : %s\n", company);
		printf("유효기간 : ");
		validto.OutDate();
		puts("");
		printf("가격%d\n", price);
	}
};

void main() {
	Product shrimp("새우깡", "농심", 2020, 8, 15, 900);
	shrimp.OutProduct();
}

