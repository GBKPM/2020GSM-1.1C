#include <stdio.h>
int main() {
	//17. 기본요금 1000원 할인율 적용 최종 요금 계산
	//0~3세 100% || 4~13세 50% || 14~19세 25% || 20세 이상 %0
	//int age, fee = 1000;
	//printf("나이를 입력하세요: ");
	//scanf_s("%d", &age);
	//if (age <= 19 && age >= 14) fee = fee * 75 / 100;
	//else if (age <= 13 && age >= 4) fee = fee * 50 / 100;
	//else if (age >= 0 && age <= 3) fee = 0;
	//printf("요금은 %d원 입니다.\n\n", fee);
	//printf("0~3세 할인율 100%%\n4~13세 할인율 50%%\n14~19세 할인율 25%%\n20세 이상 할인율 0%%");

	//단축버전
	//최초 두 가지로 나누고 한 번 더 나눈다.
	//속도가 좋아짐
	int age, fee = 1000;
	double rate = 0.0;
	printf("나이를 입력하세요: ");
	scanf_s("%d", &age);
	if (age <14) {
		if (age < 4) rate = 0;
		else rate = 0.5;
	}
	else {
		if (age < 20) rate = 0.75;
		else fee = 1.0;
	}
	printf("최종요금: %d원\n", (int)(fee * rate));

	return 0;
}