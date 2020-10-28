#include <stdio.h>
int main() {
	//24. 다시쳐보기
	/*int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j <= i; j++) {
			printf("*\t");
		}
		printf("\n");
	}*/

	//25. 다시쳐보기
	/*int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4 - i; j++) {
			printf(" \t");
		}
		for (j = 0; j <= i; j++) {
			printf("*\t");
		}
		printf("\n");
	}*/

	//27. break 다시쳐보기
	/*int i = 0;
	printf("break문: ");
	do {
		printf("%d,", i);
		i++;
		if (i == 5) break;
	} while (i <= 10);

	printf("\n최종결과: %d\n", i);*/

	//28. continue 다시쳐보기
	/*int a = 0;
	printf("continue문: ");
	do {
		if (a >= 5) {
			a++;
			continue;
		}
		printf("%d,", a);
		a++;
	} while (a < 10);

	printf("\n최종결과: %d\n", a);*/
	return 0;
}