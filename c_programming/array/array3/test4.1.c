#include <stdio.h>
int main() {
	//2��~9�� ��� 5�� ����
	//while ����
	int i = 2, j = 1;
	while (i!=10) {
		while (j != 10) {
			printf("%d x %d = %2d", i, j, i * j);
			printf("\n");
			j++;
		}
		i++;
		if (i == 5) continue;
		j = 1;
		printf("\n");
	}
	return 0;
}