#include <stdio.h>
int main() {
	//���� on
	int sc[4][4] = { 0 };
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			//�����Է¹ޱ�
			printf("input num>> ");
			scanf_s("%d", &sc[i][j]);
			//sum+=i;
			sc[i][3] += sc[i][j]; //�� ��
			sc[3][j] += sc[i][j];
			sc[3][3] += sc[i][j];
		}
	}
	printf("���\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			printf("%4d", sc[i][j]);
		printf("\n");
	}
	return 0;
}