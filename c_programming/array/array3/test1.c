#include <stdio.h>
int main() {
	//50부터 100사이 수 홀수 개수 홀수 합 구하기
	int i, sum = 0, cnt = 0;
	for (i = 50; i < 100; i++) {
		if (i % 2 == 1) {
			cnt++;
			sum += i;
		}
	}
	printf("홀수의 개수: %d\n홀수의 합: %d", cnt, sum);
	return 0;
}