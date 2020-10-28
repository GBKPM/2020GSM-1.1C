#include <stdio.h>
int main() {
	//1. 이름과 나이 입력, 한번에 출력(이름 gets, 나이 scanf_s, 출력 printf)
	int m;
	char n[100];
	printf("나이를 입력하세요: ");
	scanf_s("%d%*c", &m); //scanf는 엔터 때문에 공백을 제거하는 %*c를 넣어야 한다.
	printf("이름을 입력하세요: ");
	gets_s(n, sizeof(n)); 
	printf("이름은 %s, 나이는 %d입니다.", n, m);

	//2. 두 정수 입력, x와y에 저장
	//int x, y;
	//printf("두 정수 입력: ");
	//scanf_s("%d %d", &x, &y);
	//printf("x: %d, y: %d", x, y);
	return 0;
}