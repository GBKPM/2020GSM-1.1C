#include <stdio.h>
int main() {
	//2��~9�� ��� 5�� ����
	//for ����
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