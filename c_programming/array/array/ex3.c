#include <stdio.h>
#include <stdlib.h> //rand() 함수 정의 0~32767, srand() : 난수 초기화해주는 역할 ->srand(time(0))
#include <time.h> //time 정의
#define SIZE 5
int main() {
	//배열에 데이터 입력하는 방법
	//1. 키보드로 입력받기
	int arr[SIZE] = { 0 };
	int i = 0;
	//키보드로 데이터 입력받고, 출력하기
	/*for (i = 0; i < SIZE; i++) {
		printf("input number %d : ", i);
		scanf_s("%d", &arr[i]);
		printf("%d\n", arr[i]);
	}*/

	//2. 난수로 데이터 입력
	srand(time(0)); //rand 값을 초기화

	for (i = 0; i < SIZE; i++) {
		arr[i] = rand() % 100 + 1; //1~100까지
		printf("%d\n", arr[i]);
	}
	
	return 0;
}