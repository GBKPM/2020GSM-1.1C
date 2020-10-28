#include <stdio.h>
int main() {
	/*정수로 된 3과목의 점수를 입력받아 평균을 구한 후,
	반올림하여 소수 첫째자리까지 출력해보기*/
	/*int a, b, c, d;
	double e;
	puts("3과목 점수를 입력하세요\n");
	scanf_s("%d%d%d", &a, &b, &c);
	d = a + b + c;
	e = d / 3.0;
	printf("평균은 %.1f입니다.\n", e);*/
	/*실수의 yard를 입력받아 cm로 환산한 값을
	  반올림하여 소수 첫째자리까지 출력해보기
	  (1yard=91.44cm)*/
	double yard, cm;
	puts("input yard? ");
	scanf_s("%lf", &yard);
	cm = yard * 91.44;
	printf("%.2f yard는 %.2f cm입니다.\n",yard, cm);
	return 0;
}