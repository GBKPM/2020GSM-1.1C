#include <stdio.h>
int main() {
	//1��
	//int num, d = 1;
	//printf("input number> ");
	//scanf_s("%d", &num);
	//printf("%d�� ��� = ",num);
	//while (d <= num) {
	//	if (num % d == 0)
	//		printf("%d ", d);
	//	d++;
	//}

	/*2��
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

	/*3��
	int num;
	do {
		printf("����Է� >> ");
		scanf_s("%d", &num) :
	} while (num <= 0);
	printf("%d\n ", num);*/

	/*4��
	int score;
	do {
		printf("���� �Է� >> ");
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

	/*6�� ?
	int choice, n, sum = 0, i;
	while (1) {
	printf("\n1. 1���� N���� �� \n");
	printf("2. 1���� N���� Ȧ���� �� \n");
	printf("3. 1���� N���� ¦���� �� \n");
	printf("4. ���α׷� ����\n\n");
	printf("Select? (1~) ");
	scnaf_s("%d", &choice);

	if (choice < 1 || choice>4)
		continue;
	if (choice == 4)
		break;
	printf("n���� �Է� >> ") :
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

	//���簢�� ���簢�� ����
	int choice, width, height;
	printf("choice? (1. ���簢��) (2. ���簢��) >> ");
	scanf_s("%d", &choice);
	if (choice == 1) {
		printf("�Ѻ��� ���� �Է� : ");
		scanf_s("%d", &width);
		printf("���� : %d, �ѷ� : %d\n", width * width, 4 * width);
	}
	else {
		printf("���� ������ ���� �Է� : ");
		scanf_s("%d%d", &width, &height);
		printf("���� : %d, �ѷ� : %d\n", width * width, 2 * (width + height));
	}
	
	return 0;
}