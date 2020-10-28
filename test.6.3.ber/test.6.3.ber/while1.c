#include <stdio.h>
int main() {
	//18. 문자 입출력 엔터입력시 종료
	//char i = 0;
	//while ((i=getchar())  != '\n') {
	//	putchar(i);
	//}

	//19. 1~9 범위 정수 입력 수만큼 *출력
	//범위 벗어났다면 1이나 9로 강제 보정
	//ex. -1 = 1, 12 = 9
	/*int n, i = 0;
	printf("1~9 범위의 정수입력: ");
	scanf_s("%d", &n);
	if (n > 9) n = 9;
	else if (n < 1) n = 1;
	while (i == n) {
		printf("*");
		i++;
	}
	if (n>9) n=9; else if(n<1) n=1; while (i==n) {printf("*"); i++;}*/

	//20. 5*5에 *출력
	int i = 0, j = 0;
	while (i < 5) {
		j = 0;
		while (j < 5) {
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}