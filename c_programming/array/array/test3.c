#include <stdio.h>
int main() {
	//������1. 100�� ���� 0�Է� �ߴ� ¦�� ��° ���
	int arr[100];
	int i = 0;
	int a = 0;
	for (i=0;i<101;i++) {
		printf("input number %d : ", i);
		scanf_s("%d", &arr[i]);
		if (arr[i] == 0)
			break;
	}
	for (a = 0; a <= 50; a++)
	printf("%d ", arr[i % 2 == 0]);

		//������2. 26�� A~Z ���� ��, ���������� ó������ ���
	/*char arr[26];
	arr[0] = 'A';
	int i = 0;
	for (i = 0; i < 26; i++) {
		putchar(arr[i] );
		arr[i] += 1;
	}*/
	return 0;
}