#include <stdio.h>
int main() {
	//10���� �ڿ����� �迭�� �Է¹޾� ���� ū �� ���
	int i, max, arr[10] = { 0 };
	for (i = 0; i < 10; i++) {
		printf("input number %d : ", i);
		scanf_s("%d", &arr[i]);
	}
	
	max = arr[0];
	for (i = 1; i < 10; i++)
		if (max < arr[i])
			max = arr[i];

	printf("MAX : %d\n ", max);
	return 0;
}