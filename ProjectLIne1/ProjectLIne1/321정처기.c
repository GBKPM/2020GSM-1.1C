#include <stdio.h>
int main() {
	int lm = 0, n, j, sum, k, r;
	for (n = 4; n < 1000; n++) {
		sum = 0;
		k = INT(n / 2); //가우스함수
		for (j = 1; j < k; j++) {
			r = n % j;
			if (r == 0)
			sum = sum + j;
		}
		if (n == sum) {
			printf("%d", n);
			lm = lm + 1;
		}
	}
	printf("%d", lm);

	return 0;
}