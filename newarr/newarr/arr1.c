#include <stdio.h>
int main() {
	//int arr[10] = { 0 };

	//int i, score[5] = { 0 };
	////점수입력 4개
	////마지막은 총합
	//for (i = 0; i < 4; i++) {
	//	printf("점수 입력 %d번째: ", i);
	//	scanf_s("%d", &score[i]);
	//	score[4] += score[i];
	//}
	//for (i = 0; i < 4; i++) {
	//	printf("%d\n", score[i]);
	//}
	//printf("총합: %d", score[4]);
	
	//배열 복사
	/*int arr[5] = { 10,30,40,70,90 };
	int new_arr[5] = { 0 };
	int i;
	for (i = 0; i < 5; i++) {
		new_arr[i] = arr[i];
	}
	printf("arr: ");
	for (i = 0; i < 5; i++) {
		printf("%5d", arr[i]);
	}
	printf("\n");
	printf("new_arr: ");
	for (i = 0; i < 5; i++) {
		printf("%5d", new_arr[i]);
	}*/
	//최대값 구하기
	//int arr[5] = { 7, 1, 30, 9, 8 };
	//int i, max = 0;
	//for (i = 0; i < 5; i++) {
	//	if (max < arr[i]) max = arr[i];
	//}
	//for (i = 0; i < 5; i++)
	//	printf("%5d", arr[i]);
	//printf("\n최대값: %d", max);


	int arr[5] = { 7, 1, 30, 9, 8 };
	int i;
	for (i = 0; i < 5; i++)
		if (arr[0] < arr[i + 1]) arr[0] = arr[i + 1];
		printf("\n최대값: %d", arr[0]);
	return 0;
}