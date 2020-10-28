#include <stdio.h>
int main() {
	int arr[10] = { 0 };
	for (int i=0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	//printf("%d \n", arr[0]);
	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("%d : ", i);
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}


	/*arr[0] = 9;
	arr[1] = 90;
	arr[4] = 80;*/

	//printf("%d %d %d\n", arr[0], arr[1], arr[4]);

	//int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10; //a[11]
	//	for (int i; i < 11; i++) {
	//		a[i] = 100;
	//	}
	//a1 = 100;
	//a2 = 90;
	//a3 = 80;
	//a4 = 70;
	//printf("%d %d %d\n", a1, a2, a3);
	return 0;
}