#include <stdio.h>
//������ �Է¹޾� 10ū�� ����Լ�, 10���� �� ����Լ� �����
void plus_Ten(int n) {
	printf("10ū�� : %d\n", n + 10);
}

void minus_Ten(int n) {
	printf("10���� �� : %d\n", n - 10);
}
int main() {
	int num;
	printf("input num>> ");
	scanf_s("%d", &num);
	plus_Ten(num); //�Լ�ȣ��
	minus_Ten(num); //�Լ�ȣ��
	return 0;
}