#include<stdio.h>
int main() {
	int i, j;
	//char ch;
	//for (i = 1; i <= 9; i++) {
	//	printf("%d ", i);
	//}
	//printf("\n");

	//for (i = 0; i < 3; i++) {
	//	for (j = 1; j <= 9; j++) {
	//		printf("%d ", j);
	//	}
	//	printf("\n");
	//}

	//for (i = 0; i < 5; i++) {
	//	for (ch = 'A'; ch <= 'Z'; ch++) {
	//		printf("%c", ch);
	//		printf("%d", ch);

	//	}
	//	printf("\n");
	//}
	//putchar('\n');
	//puts("==================가로구구단=================");
	//int i, j = 2;
	//for (i = 2; i <= 9; i++) {
	//	for (j = 1; j <= 9; j++) {
	//		printf("%dx%d=%2d ", i, j, i * j);
	//	}
	//	putchar(' \n');
	//}
	//putchar('\n');
	//puts("==================세로구구단=================");
	//putchar('\n');
	//for (i = 1; i <= 9; i++) {
	//	for (j = 2; j <= 9; j++) {
	//		printf("%dx%d=%2d ", j, i, i * j);
	//	}
	//	putchar(' \n');
	//}
	putchar('\n');
	puts("==================홀수구구단=================");
	putchar('\n');
	for (i = 2; i <= 9; i++) {

		if (i % 2 == 0)
			continue;

		for (j = 1; j <= 9; j++) {
			printf("%dx%d=%2d ", i, j, i * j);
		}
		system("pause");
		//system("cls");
		putchar('\n');
	}
	return 0;
}