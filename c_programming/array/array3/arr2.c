#include <stdio.h>
int main() { //1 2 3 4 5
	int arr[5][5] = { 0 };
	int cnt = 0, i, j;
	
	for (i = 0; i < 5; i++) { //�� ó���� ���� �ٱ��� �ݺ�
		for (j = 0; j < 5; j++) { //�� ó���� ���� �ٱ��� �ݺ�
			arr[i][j] = ++cnt;
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}