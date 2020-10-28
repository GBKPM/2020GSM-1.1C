#include <stdio.h>
int main() {
	//15. 세 정수 입력 최대값 구하기(if문과 변수 2개)
	//int a, max;
	//printf("첫번째 정수 입력: ");
	//scanf_s("%d", &a);
	//max = a;
	//printf("두번째 정수 입력: ");
	//scanf_s("%d", &a);
	//if (max < a) max = a;
	//printf("세번째 정수 입력: ");
	//scanf_s("%d", &a);
	//if (max < a) max = a;
	//printf("최대값: %d", max);
	//16. 기본요금 1000원 20세미만 25%할인 20세이상 할인x
	//(age, fee 2개의 변수만 사용, 요금 계산해서 출력
	int age, fee = 1000;
	printf("나이를 입력하세요: ");
	scanf_s("%d", &age);
	
	if (age < 20) fee = fee * 75 / 100;

	printf("요금은 %d원 입니다.", fee);
	return 0;
}