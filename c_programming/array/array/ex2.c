#include <stdio.h>
int main() {
	//���� �迭�� �ʱ갪�� �����ϰ�, ����� ���� ���� ����ŭ '*'���
	int arr[] = { 1,9,5,3,8,7 };
	int size, i, j;
	//�迭 ���� ���ϱ� : sizeof()
	size = sizeof(arr) / sizeof(arr[0]);
	printf("�迭 ������ %d�� �Դϴ�.\n", size);
	
	for (i = 0; i < size; i++) {
		printf("%d : ", arr[i]);
		for (j = 0; j < arr[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}