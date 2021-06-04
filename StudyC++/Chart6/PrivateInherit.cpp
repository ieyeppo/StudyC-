#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

class Date {
protected:
	int year, month, day;

public :
	Date() {}
	Date(int y, int m, int d) { year = y; month = m; day = d; }
	void OutDate() { printf("%d/%d/%d\n", year, month, day); }
};


class Product :private Date
{
private :
	char name[64];
	char company[32];
	int price;

public :
	Product(const char* name, const char* company, int y, int m, int d, int price) : Date(y, m, d) {
		strcpy(this->name, name);
		strcpy(this->company, company);
		this->price = price;
	}

	void OutProduct() {
		printf("�̸� : %s\n", name);
		printf("������ : %s\n", company);
		printf("��ȿ�Ⱓ : ");
		OutDate();
		puts("");
		printf("����%d\n", price);
	}
};

void main() {
	Product shrimp("�����", "���", 2020, 8, 15, 900);
	shrimp.OutProduct();
}