#include <stdio.h>
int main() {
	//6. �� ������ �Է¹޾� ���� ���(+=���)
	//(���� �߰� or ���α׷� ����x)
	//int num, total = 0;

	////���⿡ �� �ڵ�
	//printf("���� ù��°: ");
	//scanf_s("%d", &num);
	//total += num;
	//printf("���� �ι�°: ");
	//scanf_s("%d", &num);
	//total += num;
	//printf("���� ����°: ");
	//scanf_s("%d", &num);
	//total += num;

	//printf("Total : %d\n", total);
	

	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j <= 5; j++) {
			printf(" \t");
		}
		for (j = 0; j <=4 - i; j++) {
			printf("*\t");
		}
		printf("\n");
	}
	return 0;
}