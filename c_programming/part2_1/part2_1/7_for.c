#include<stdio.h>
int main() {
	//Hello 100�� ����ϱ�
	//int i;
	//for (i = 0; i < 10; i++) {
	//	printf("%d\n", i+1);
	//}
	//for 1���� 100���� �� ����ϱ�
	//int i = 1, sum = 0; //��������
	//for (i = 1; i <= 100; i++) {
	//	sum = sum + i;
	//	if (i %10==0)
	//		break;
	//}
	//printf("sum : %d\n", sum);
	//printf("%d ", sum);
	//������ 2�� ����
	/*int i;
	for (i = 1; i <= 9; i++) {
		printf("2 * %d = %d\n", i, 2 * i);
	}*/

	//�Է¹��� �� ����
	/*int i, dan;
	printf("��� �� dan �Է� ? ");
	scanf_s("%d", &dan);
	for (i = 1; i <= 9; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}*/
	//3! ����
	int i, fact = 1;
	printf("3! = ");
	for (i = 1; i < 3; i++) {
		fact *= i;
		printf("%d * ", i);
	}
	fact *= i; //fact = fact * i;
	printf("%d = %d\n", i, fact);
	//�Ǻ���ġ ���� ���
	//1,1,2,3,5,8,13,...
	//���� 3��
	//�����÷ο� ����
	//for("")
	/*char x = 1, y = 1, z = 0;
	printf("1, 1, ");
	for (;;) {
		z = x + y;
		if (z < 0)
			break; //continue
		printf("%d, ",z);
		x = y;
		y = z;
	}
	printf("\n");
	printf("%d\n", z);*/
	return 0;
}