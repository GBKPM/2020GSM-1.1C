#include <stdio.h>
//������ ���޹޾� ���� �ﰢ���� ����ϴ� �Լ� �ۼ�
void print_Strar(int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < i + 1; j++) {
			printf("*\t");
		}
		printf("\n");
	}
}
int main() {
	int n;
	printf("input num> ");
	scanf_s("%d", &n);
	print_Strar(n);
	printf("This is too hard");
	return 0;
}