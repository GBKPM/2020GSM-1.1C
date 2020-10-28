#include <stdio.h>
//정수를 입력받아 10큰수 출력함수, 10작은 수 출력함수 만들기
void plus_Ten(int n) {
	printf("10큰수 : %d\n", n + 10);
}

void minus_Ten(int n) {
	printf("10작은 수 : %d\n", n - 10);
}
int main() {
	int num;
	printf("input num>> ");
	scanf_s("%d", &num);
	plus_Ten(num); //함수호출
	minus_Ten(num); //함수호출
	return 0;
}