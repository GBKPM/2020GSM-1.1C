#include <stdio.h>
//�������� : ��� �Լ��� �Բ� �����ϴ� ����
int a, b;
int sum = 0, multi = 0;

void input() {
	printf("input 2 number >");
	scanf_s("%d%d", &a, &b);
}

void cal() {
	sum = a + b;
	multi = a * b;
}

void output() {
	printf("�� ���� ���� %d, �� ���� ���� %d\n\n", sum, multi);
}
int main() {
	//�� ������ �Է� �޴� �Լ�, �� ���� ��, �� ���ϴ� �Լ�, ����ϴ� �Լ�
	input(); //�μ��Է��Լ�
	cal(); //�μ���, �����
	output(); //���
	
	return 0;
}