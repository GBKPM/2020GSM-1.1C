#include <stdio.h>
#include <string.h>
//�Ϲ����� ����ü
//struct Person {
//	char name[20];
//	int age;
//	char address[100];
//};

//typedef�� �� ����ü == �ڷ����� Per�� �޶���
typedef struct Person {
	char name[20];
	int age;
	char address[100];
}Per;


int main() {
	//����ü

	//p1
	//struct Person p1;
	Per p1;
	strcpy(p1.name, "ȫ�浿");
	p1.age = 30;
	strcpy(p1.address, "����� ��걸 �ѳ���");


	//p2
	//struct Person p2 = { "��浿", 40, "����� ���ʱ� ������" };
	Per p2 = { "��浿", 40, "����� ���ʱ� ������" };


	//p1���
	printf("�̸� : %s\n", p1.name);
	printf("���� : %d\n", p1.age);
	printf("�ּ� : %s\n", p1.address);
	printf("\n\n");

	//p2���
	printf("�̸� : %s\n", p2.name);
	printf("���� : %d\n", p2.age);
	printf("�ּ� : %s\n", p2.address);


}