#include <stdio.h>
int main() {
	//24. �ٽ��ĺ���
	/*int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j <= i; j++) {
			printf("*\t");
		}
		printf("\n");
	}*/

	//25. �ٽ��ĺ���
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

	//27. break �ٽ��ĺ���
	/*int i = 0;
	printf("break��: ");
	do {
		printf("%d,", i);
		i++;
		if (i == 5) break;
	} while (i <= 10);

	printf("\n�������: %d\n", i);*/

	//28. continue �ٽ��ĺ���
	/*int a = 0;
	printf("continue��: ");
	do {
		if (a >= 5) {
			a++;
			continue;
		}
		printf("%d,", a);
		a++;
	} while (a < 10);

	printf("\n�������: %d\n", a);*/
	return 0;
}