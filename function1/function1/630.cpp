#include <stdio.h>
#include <string.h>
void func1() {
	printf("python ");
}
void func2(void) {
	printf("is ");
}
void func3() {
	printf("too ");
}
void func4();
int main() {
	//� ����� �����ϴ� �������� �������
	//�ϳ��� �Լ��� ���� ���α׷��� �����
	//�������� ������ ����
	//��ɺ��� �Լ��� ������ �ۼ��ϰ� �Լ��� �ʿ��� ������ ȣ���ϴ� ������ ���α׷���
	func1();
	func2();
	func3();
	func4();
	scanf_s("%d");
	return 0;
}
void func4() {
	printf("easy ");
}