#include <stdio.h>
int main() {
	//int num;
	//printf("���� �Է�: ");
	//scanf_s("%d", &num);
	//while (num) { //num = 0 ������ ����
	//	printf("%d", num % 10);
	//	num = num / 10;
	//}

	/*int arr[5] = { -7,9,10,50,55 };
	int i, max = arr[0], min = arr[0];
	for (i = 1; i < 5; i++) {
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}
	printf("�ִ밪�� %d�̰� �ּҰ��� %d�Դϴ�.", max, min);*/

	int arr[5] = { 90,80,100,50,70 };
	int i, j, temp = 0, min = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("��������: ");
	for (i = 0; i < 5; i++) {
		printf("%d\t", arr[i]);
	}
	
	printf("\n");
	for (i = 0; i < 4; i++) {
		min = i;
		for (j = i+1; j < 5; j++) {
			if (arr[j] < arr[min])
				min = j;
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
	printf("��������: ");
	for (i = 0; i < 5; i++) {
		printf("%d\t", arr[i]);
	}
	return 0;
}