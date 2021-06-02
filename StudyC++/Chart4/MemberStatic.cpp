#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Member {
	char name[20];
	char contect[20];
	char addr[50];
	static int count;
public :
	Member(const char* aname, const char* acontect, const char* aaddr);
	static void MemberCount();
	void MemberInfo();
};

int Member::count = 0;

Member::Member(const char* aname, const char* acontect, const char* aaddr) {
	strcpy(name, aname);
	strcpy(contect, acontect);
	strcpy(addr, aaddr);
	count++;
}
void Member::MemberCount() {
	printf("count : %d\n", count);
}

void Member::MemberInfo(){
	printf("�̸� : %s\t", name);
	printf("����ó : %s\t", contect);
	printf("�ּ� : %s\n", addr);
}

void main() {
	Member m1("������", "0103951", "�λ�");
	Member m2("a", "0101234", "����");
	m1.MemberInfo();
	m2.MemberInfo();
	Member::MemberCount();
}