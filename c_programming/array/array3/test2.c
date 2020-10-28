#include <stdio.h>
int main() {
	//n을 입력받아 1, 2 3, 4 5 6, 7 8 9 10출력
	int n = 0, i, j, cnt = 0;
	printf("n입력: ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			++cnt;
			printf("%5d", cnt);
		}
		printf("\n");
	}
}