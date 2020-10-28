#include <stdio.h>
//전역변수 : 모든 함수가 함께 공유하는 변수
int a, b;
int sum = 0, multi = 0;

void input() {
	printf("input 2 number >");
	scanf_s("%d%d", &a, &b);
}

void cal() {
	sum = a + b;
	multi = a * b;
}

void output() {
	printf("두 수의 합은 %d, 두 수의 곱은 %d\n\n", sum, multi);
}
int main() {
	//두 정수를 입력 받는 함수, 두 수의 합, 곱 구하는 함수, 출력하는 함수
	input(); //두수입력함수
	cal(); //두수합, 곱계산
	output(); //출력
	
	return 0;
}