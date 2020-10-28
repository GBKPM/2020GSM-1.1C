#include <stdio.h>
int main() {
	//조건연산자(3항연산자) ? :
	// (조건) ? 조건이 참일때 식 : 거짓일 때 식

	/*//양수, 음수 판별 프로그램
	int num;
	printf("input integer : ");
	scanf_s("%d", &num);
	printf("%s", (num < 0) ? "음수" : "양수");*/

	//소문자를 대문자로 a A
	/*char ch; //문자 하나
	printf("소문자를 대문자로 변환 합니다.\n소문자를 입력하세요 >");
	scanf_s("%c", &ch);
	ch = (ch >= 'a' && ch <= 'z') ? ch - 32 : ch;
	printf("%c\n", ch);*/

	//세 정수를 입력 받아 가장 큰 수를 출력하기
	int a, b, c, max;
	puts("3개의 정수를 입력하세요.");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("input number: %d %d %d\n", a, b, c);

	max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	printf("가장 큰 수 : %d\n", max);
	return 0;
}