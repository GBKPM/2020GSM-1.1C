#include <stdio.h>
int main() {
	/*printf("\"""C:\\Download\\hello.cpp""\"\n");
	printf("\\n");*/

	/*int t, a = 0, b = 0;
	printf("초 입력: ");
	scanf_s("%d", &t);
	a = t / 60;
	b = t % 60;
	printf("%d/%d", a, b);*/
	
	/*int a, b;
	printf("input 2 number >> ");
	scanf_s("%d %d", &a, &b);

	if (a % 2 == 0) printf("짝수+");
	else printf("홀수+");

	if (b % 2 == 0) printf("짝수=");
	else printf("홀수=");

	if ((a + b) % 2 == 0) printf("짝수");
	else printf("홀수");*/

	/*int a, b, c, i;
	printf("터널 높이 3번 입력>> ");
	scanf_s("%d %d %d", &a, &b, &c);
	while (1) {
		if (a <= 170) {
			printf("CRASH");
			break;
		}
		else printf("PASS ");

		if (b <= 170) {
			printf("CRASH");
			break;
		}

		if (c <= 170) {
			printf("CRASH");
			break;
		}
	}*/

	/*int t, s, sum = 0, temp = 0;
st:
	printf("현재 남은 경기시간: ");
	scanf_s("%d", &t);
	if (t > 90) {
		printf("90분 이내로 설정해 주세요\n");
		goto st;
	}
	printf("우리팀의 득점: ");
	scanf_s("%d", &s);
	
	temp = t / 5;
	sum = s + temp;
	printf("우리팀의 최종 득점은 %d점 입니다.", sum);*/

	/*int a, b, c;
	printf("input 3 number>> ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > c) {
		if (a > b) {
			if (b > c) printf("%d", b);
			else printf("%d", c);
		}
		else printf("%d", a);
	}
	else if (a < c) {
		if (b < c) {
			if (a > b) printf("%d", b);
			else printf("%d", a);
		}
	}
	else  if (b < c) printf("%d", c);
	else printf("%d", b);*/

	/*char a[20];
	double d;
	int b;
	char c;
	printf("이름 나이 부서코드 보안키");
	getchar(a);
	scanf_s("%d", &b);
	scanf_s("%c", &c);
	scanf_s("%f", &d);
	printf("%s\n", a);
	printf("%d\n", b);*/
	
	int a = 0;
	int sum = 0;
	while (1) {
		a++;
		printf("%d ", a);
		sum += a;
		if (a == 10000) break;
	}
	printf("\n%d", sum);
	return 0;
}