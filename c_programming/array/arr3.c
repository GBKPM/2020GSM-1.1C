#include <stdio.h>
int main() { //1 2 3 4 5
	int list[3][4] = {
		{10,20,30},
		{40,50,60}
	};
	int i, j;

	//2���� �迭�� ��� ���� ���ձ��ϱ�
	//1. ���� ���ձ��ϱ�
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++)
			list[i][3] += list[i][j]; //sum+=a
	}
	

	//2. ���� ���ձ��ϱ�
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++)
			list[2][j] += list[i][j];
	}

	//���
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
			printf("%d\t", list[i][j]);
		printf("\n");
	}
	return 0;
}