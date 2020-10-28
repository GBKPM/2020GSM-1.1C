#include <stdio.h>
int min1(a, b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}
int min2(a, b, c) {
	int min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	return min;
}
int boe(d, x) {
	int x = 0;
	for(int i=1;i<d;i++)
		if (d / i == 0) {
			printf("%d", i);
			x++;
		}
			return x;
}
int main() {
	int a, b, c;
	int re, min;
	int d, x;
	printf("2개 정수 입력: ");
	scanf_s("%d %d", &a, &b);
	re = min1(a, b);
	printf("둘 중 작은값: %d\n", re);

	printf("3개 정수 입력: ");
	scanf_s("%d %d %d", &a, &b, &c);
	re = min1(min1(a, b), c);
	printf("3개의 정수중 작은값: %d\n", re);
	re = min2(a, b, c);
	printf("두번째 방법: %d\n", re);
	
	printf("정수 입력: ");
	scanf_s("%d", &d);
	re = boe(x);
	printf("약수의 개수: %d\n", re);

	

	return 0;
}