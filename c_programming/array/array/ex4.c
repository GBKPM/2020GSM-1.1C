#include <stdio.h>
int main() {
	//�迭 �����ϱ�
	int x[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int y[10];
	int i;

	printf("���� ��\n");
	for (i = 0; i < 10; i++)
		printf("x[%d] : %d, y[%d] : %d\n", i, x[i], i, y[i]);

	//�迭����
	for (i = 0; i < 10; i++)
		y[i] = x[i];

	printf("���� ��\n");
	for (i = 0; i < 10; i++)
		printf("x[%d] : %d, y[%d] : %d\n", i, x[i], i, y[i]);
	return 0;
}