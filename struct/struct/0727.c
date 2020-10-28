#include <stdio.h>
#include <string.h>
//일반적인 구조체
//struct Person {
//	char name[20];
//	int age;
//	char address[100];
//};

//typedef를 쓴 구조체 == 자료형이 Per로 달라짐
typedef struct Person {
	char name[20];
	int age;
	char address[100];
}Per;


int main() {
	//구조체

	//p1
	//struct Person p1;
	Per p1;
	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울시 용산구 한남동");


	//p2
	//struct Person p2 = { "고길동", 40, "서울시 서초구 반포동" };
	Per p2 = { "고길동", 40, "서울시 서초구 반포동" };


	//p1출력
	printf("이름 : %s\n", p1.name);
	printf("나이 : %d\n", p1.age);
	printf("주소 : %s\n", p1.address);
	printf("\n\n");

	//p2출력
	printf("이름 : %s\n", p2.name);
	printf("나이 : %d\n", p2.age);
	printf("주소 : %s\n", p2.address);


}