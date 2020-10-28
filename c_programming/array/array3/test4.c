#include <stdio.h>
int main() {
	//2단~9단 출력 5단 제외
	//for 버전
	int i, j;
		for (i = 2; i < 10; i++) {
			for (j = 1; j < 10; j++) {
				if (i == 5) continue;
				printf("%d x %d = %2d\n", i, j, i * j);
			}
			printf("\n");
		}
	return 0;
}