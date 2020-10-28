#include <stdio.h>
int main() {
	//산술연산자 : 연산식을 처리하기 위한 연산자
	//+, -, *, /, % (이항연산자)
	//증감연산자 : ++, -- (단항연산자)

	/*int x = 19, y = 5;
	printf("%d %d %d %d %d\n", x + y, x - y, x * y, x / y, x % y);
	/*printf("x: %d x++: %d \n", x, ++x);
	printf("y: %d y++: %d \n", y, y++);*/
	/*++x;
	printf("%d\n", x);
	y++;
	printf("%d\n", y);*/


	//형변환:묵시적(자동) 형변환과 명시적(강제) 형변환
	/*
	 묵시적(자동) 형변환 : 서로 다른 자료형끼리 계산될때 데이터의 표현 범위가 더 큰쪽으로
	 명시적(강제) 형변환 : 프로그래머가 직접 바꾸고자 하는 자료형으로 지정하는 변환
	 !!!묵시적 형변환은 원하는 결과를 얻지 못하는 경우도 발생한다.*/
	/*int a = 29, b = 7, c, d;
	double x = 5.3, y, z;
	c = (a / b) * x;
	z = ((double)a / (double)b) * x; //강제형변환
	d = (a / (int)x) * b; //강제형 변환
	y = (a / b) * x;	//21.2
	printf("c=%d, d=%f, y=%d, z=%f\n", c, z, d, y);*/

	/*int a = 5, b = 2;
	double re;
	//re = (double)a / (double)b;
	re = (double)(a / b);
	printf("%f\n", re);*/

	//긴 정수형에서 짧은 정수형으로 변환할 때
	/*char ch;
	int dec = 365;
	ch = (char)dec;
	printf("%d\n", ch);*/

	/*printf("10/3에서 나머지를 찍어봐~\n");
	printf("%d\n", 10 % 3);*/

	printf("\n\n 16200초는 몇 시간 몇 분 몇 초인가?\n");
	int a, b, c;
	a = 16200 / 3600;
	b = (16200 % 3600) / 60;
	c = (16200 % 3600) % 60;
	printf("%d시간 %d분 %d초입니다.\n", a, b, c);

	printf("\n\n억, 만 단위로 끊어서 출력하면?\n\n");
	int m = 239405900, d, e, f;
	d = m / 100000000;
	m = m % 100000000;
	e = m / 10000;
	f = m % 10000;
	printf("\n\n %d억 %d 만 %d원\n\n", a, b, c);
	return 0;
}