#include <stdio.h>
int main() {
	//배열 데이터 입력
	int arr[5];
	int i, size;
	int sum = 0;
	double avg = 0.0;

	for (i = 0; i < 5; i++)
		printf("input number >> ");
		scanf_s("%d ", &arr[i]);
	sum += arr[i];

	//합(sum)과 평균(avg)
	avg = sum / 5;
	printf("합계 :%d, 평균 :%.2f\n", sum, avg);
	
	return 0;
}