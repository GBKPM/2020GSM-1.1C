#include <stdio.h>
int main() {
	int arr[10] = { 11,22,33,44,55,66,77,88,99,110 };
	int i;
	for (i = 0; i < sizeof(arr) / sizeof(int); i++) //�迭�� ��� ������ŭ �ݺ�
		arr[i] *= 2; //�迭�� ��ҿ� 2�� ���ؼ� �ٽ� ��ҿ� ����
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
		printf("%3d ", arr[i]);
	

	//2���� �迭�� ������
	/*int arr[3][4] = { 0 };
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}*/
	return 0;
}