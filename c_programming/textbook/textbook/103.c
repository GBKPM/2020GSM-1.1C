#include <stdio.h>
int main() {
	//103쪽 for(초기값, 조건식, 증감식)
	int i;
	for (i = 1; i < 10; i++)
	{
		printf("2 * %d = %2d\n", i, i * 2);
	}

	//int a = 1, num;
	//printf("input number >> ");
	//scanf_s("%d", &num);
	//while (a <= num) {
	//	printf("%3d", a);
	//	a++;
	//}
	//printf("\n");

	//int a = 1, num;
	//printf("input number >> ");
	//scanf_s("%d", &num);
	//while (num!=0) {
	//	printf("%d ", num);
	//	num--;
	//}

	/*int a = 1, num;
	printf("input number >> ");
	scanf_s("%d", &num);
	for (a = 1; num > 0; num--) {
		printf("%d ", num);
	}
	printf("\n");
	*/

	//int a;
	//do {
	//	scanf_s("%d", &a);
	//	printf("%d", a);
	//} while (a != 0);

	int c;
	do {
		printf("소문자 입력 >> ");
		c = getchar();
		getchar();
		printf("입력한 소문자%c는 대문자 %c입니다.\n", c, c - 32);
	} while (c != 'q');
	return 0;
}