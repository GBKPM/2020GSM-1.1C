#include <stdio.h>
int main() {
	//자신을 제외한 양의 약수들의 합으로 표현되는 양의 정수를 완전수라고 한다.
	//6 = 1+2+3
	//주어진 숫자가 완전수인지를 검사하는 프로그램

	//입력 : 정수를 입력하시오.> 6
	//출력 : 6은 완전수 입니다.
	/*int n, i = 1, sum = 0;
	printf("정수를 입력하시오.> ");
	scanf_s("%d", &n);
	while (i < n) {
		if (n % i == 0) sum += i;
		i++;
	}
	if (sum == n) printf("%d는 완전수입니다.\n", n);
	else printf("%d는 완전수가 아닙니다.\n", n);*/

	//int i, j;
	//int cnt = 0;
	//for (i = 0; i < 5; i++) {
	//	for (j = 0; j < 5; j++) {
	//		printf("%d\t", ++cnt);
	//	}
	//	printf("\n");
	//}

	/*int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5+i; j++) {
			if (i + j >= 4) printf("*\t");
			else printf("\t");
		}
		printf("\n");
	}
	for(i=0;i<5;i++)
		for (j = 0; j < 4 - i; j++) {
			printf(" ");
		}
	for (j = 0; j < (2 * i) + 1; j++) {
		printf("*");
	}
	printf("\n");*/

	//숙제당
	int i, j;
	int cnt = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d\t", ++cnt);
		}
		printf("\n");
	}
		return 0;
}