#include <stdio.h>
int main() {
	//1번
	//int num, d = 1;
	//printf("input number> ");
	//scanf_s("%d", &num);
	//printf("%d의 약수 = ",num);
	//while (d <= num) {
	//	if (num % d == 0)
	//		printf("%d ", d);
	//	d++;
	//}

	/*2번
	int dan = 2, y;
	while (dan <= 9) {
		y = 1;
		while (y <= 9) {
			printf("%d * %d = %d\n", dan, y, dan * y);
			y++;
		}
		dan++;
		printf("\n");
	}*/

	/*3번
	int num;
	do {
		printf("양수입력 >> ");
		scanf_s("%d", &num) :
	} while (num <= 0);
	printf("%d\n ", num);*/

	/*4번
	int score;
	do {
		printf("점수 입력 >> ");
		scanf_s("%d", &score);
	} while (score < 0 || score > 100);

	switch (score / 100) {
	case 10;
	case 9: printf("A") : break;
	case 8: printf("B"); break;
	case 7: printf("C"); break;
	default: printf("F");
	}

	if ((score > 70 && score % 10 >= 5) || score == 100)
		printf("+")*/

	/*6번 ?
	int choice, n, sum = 0, i;
	while (1) {
	printf("\n1. 1부터 N까지 합 \n");
	printf("2. 1부터 N까지 홀수의 합 \n");
	printf("3. 1부터 N까지 짝수의 합 \n");
	printf("4. 프로그램 종료\n\n");
	printf("Select? (1~) ");
	scnaf_s("%d", &choice);

	if (choice < 1 || choice>4)
		continue;
	if (choice == 4)
		break;
	printf("n값을 입력 >> ") :
	scanf_s("%d", &n) :

	switch (choice) {
	case 1:
		for (i = 1; i <= n; i++)
			sum += i;
		break;
	case 2:
		for (i = 1; i <= n; i++)
			if (i % 2 == 1) sum += i;
		break;
	case 3:
		for (i = 1; i <= n; i++)
			if (i % 2 == 0) sum += i;
		break;
	}
	printf("result = %d\n", sum);
	}*/

	//직사각형 정사각형 넓이
	int choice, width, height;
	printf("choice? (1. 정사각형) (2. 직사각형) >> ");
	scanf_s("%d", &choice);
	if (choice == 1) {
		printf("한변의 길이 입력 : ");
		scanf_s("%d", &width);
		printf("면적 : %d, 둘레 : %d\n", width * width, 4 * width);
	}
	else {
		printf("가로 세로의 길이 입력 : ");
		scanf_s("%d%d", &width, &height);
		printf("면적 : %d, 둘레 : %d\n", width * width, 2 * (width + height));
	}
	
	return 0;
}