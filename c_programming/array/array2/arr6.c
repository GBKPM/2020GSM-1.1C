#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	//(문제1) 1~100까지의 난수 10개를 저장하고, 최소값 출력
	int num[10] = { 0 };
	int i, min;
	int ran;
	srand((unsigned)time(0));

	//난수 10개 발생시켜 배열에 저장
	for (i = 0; i < 10; i++) {
		num[i] = rand() % 100 + 1;
		printf("%3d ", num[i]);
	}
	//최소값 찾아서 출력하기
	min = num[0];
	for (i = 1; i < 10; i++)
		if (min > num[i])
			min = num[i];

	printf("\n최소값 : %d\n ", min);

	//(문제2) 5개 정수를 입력받아, 역순으로 출력하기
	/*int data[5] = { 0 };
	int i, a;
	for (i = 0; i < 5; i++) {
		printf("input number >> ");
		scanf_s("%d", &data[i]);
	}
	for (i = 4; i >= 0; i--)
		printf("%d ", data[i]);*/
	return 0;
}