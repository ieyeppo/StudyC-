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
	printf("이름 : %s\t", name);
	printf("연락처 : %s\t", contect);
	printf("주소 : %s\n", addr);
}

void main() {
	Member m1("최혀나", "0103951", "부산");
	Member m2("a", "0101234", "서울");
	m1.MemberInfo();
	m2.MemberInfo();
	Member::MemberCount();
}