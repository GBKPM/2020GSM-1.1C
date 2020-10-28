#include <stdio.h>
int main() {
	int arr[5] = { 20,10,45,87,11 };
	int i, j, temp, min;
	for (i = 0; i < 4; i++) {
		min = i;
		for (j = i + 1; j < 4 - i; j++) {
			if (arr[j] > arr[min])
				min = j;
			temp = arr[j];
			arr[j] = arr[min];
			arr[min] = temp;
		}
	}
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
}