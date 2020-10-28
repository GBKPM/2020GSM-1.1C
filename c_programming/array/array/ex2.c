#include <stdio.h>
int main() {
	//정수 배열에 초깃값을 저장하고, 저장된 값에 따른 수만큼 '*'출력
	int arr[] = { 1,9,5,3,8,7 };
	int size, i, j;
	//배열 개수 구하기 : sizeof()
	size = sizeof(arr) / sizeof(arr[0]);
	printf("배열 개수는 %d개 입니다.\n", size);
	
	for (i = 0; i < size; i++) {
		printf("%d : ", arr[i]);
		for (j = 0; j < arr[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}