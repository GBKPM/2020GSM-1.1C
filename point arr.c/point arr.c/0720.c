#include <stdio.h>
void print_arr(int(*ptr)[3]) {
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", *(ptr[i] + j));
		}
		printf("\n");
	}
}
int main() {
	/*int a[5] = { 1,2,3,4,5 };
	int* p = a;
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
		printf("%d ", *(p + i));
	}*/

	int arr[4][3] = {1,2,3,4,5,6,7,8,9};
	/*int(*ptr)[3] = arr;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", *(ptr[i]+j));
		}
		printf("\n");
	}*/

	//배열포인터 인수함수 호출
	print_arr(arr);
}