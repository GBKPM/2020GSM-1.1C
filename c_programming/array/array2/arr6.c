#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	//(����1) 1~100������ ���� 10���� �����ϰ�, �ּҰ� ���
	int num[10] = { 0 };
	int i, min;
	int ran;
	srand((unsigned)time(0));

	//���� 10�� �߻����� �迭�� ����
	for (i = 0; i < 10; i++) {
		num[i] = rand() % 100 + 1;
		printf("%3d ", num[i]);
	}
	//�ּҰ� ã�Ƽ� ����ϱ�
	min = num[0];
	for (i = 1; i < 10; i++)
		if (min > num[i])
			min = num[i];

	printf("\n�ּҰ� : %d\n ", min);

	//(����2) 5�� ������ �Է¹޾�, �������� ����ϱ�
	/*int data[5] = { 0 };
	int i, a;
	for (i = 0; i < 5; i++) {
		printf("input number >> ");
		scanf_s("%d", &data[i]);
	}
	for (i = 4; i >= 0; i--)
		printf("%d ", data[i]);*/
	return 0;
}