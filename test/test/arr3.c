#include <stdio.h>
int main() {
	int i = 0;
	while (i != 9) {
		i++;
		int j = 1;
		while (j != 10) {
			printf("%d x %d = %d\n", i, j, i * j);
			j++;
		}
		printf("\n");
	}
	return 0;
}