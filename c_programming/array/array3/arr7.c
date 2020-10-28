#include <stdio.h>
int main() {
	int arr[5] = { 20,10,45,87,11 };
	int i, j, temp, min;

	//버블정렬
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("버블정렬: ");
	for (i = 0; i < 5; i++) {
		printf("%d\t", arr[i]);
	}

	//선택정렬
	for (i = 0; i < 4; i++) {
		min = i;
		for (j = i + 1; j < 5; j++) {
			if (arr[min] > arr[j])
				min = j; //가장 작은수의 인덱스값 = min
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
	printf("\n선택정렬: ");
	for (i = 0; i < 5; i++)
		printf("%d\t", arr[i]);
	return 0;
}