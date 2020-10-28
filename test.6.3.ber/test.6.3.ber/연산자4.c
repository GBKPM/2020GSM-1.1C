#include <stdio.h>
int main() {
	//10. !(Not)연산자 참과 거짓 바꾸기
	//int a;
	//printf("정수 입력(0이면 1 아니면 0): ");
	//scanf_s("%d", &a);
	//printf("정답은?: %d\n", a != 0 ? 0 : 1);

	//11. 나이 키 입력, 나이 20이상 30이하 동시에 키 150이상 합격
	//int age, t;
	//double temp;
	//printf("나이 입력: ");
	//scanf_s("%d", &age);
	//printf("키 입력: ");
	//scanf_s("%d", &t);
	//temp = (age >= 20 && age <= 30) && t >= 150 ? printf("합격") : printf("불합격");
	//12. 키 입력, 150이상 합격 아니면 불합격(삼항연산자)
	int cn;
	double temp;
	printf("키 입력: ");
	scanf_s("%d", &cn);
	temp = cn >= 150 ? printf("합격") : printf("불합격");
	return 0;
}