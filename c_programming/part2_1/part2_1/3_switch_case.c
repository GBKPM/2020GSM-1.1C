#include<stdio.h>
int main() {
	int point;

	printf("test? : ");
	scanf_s("%d", &point);

	/*if (point == 100)
		printf("����ؿ�!!!");
	else if (point >= 90)
		printf("A\n\n");
	else if (point >= 80)
		printf("B\n\n");
	else if (point >= 70)
		printf("C\n\n");
	else
		printf("���\n\n");*/

	switch (point) {
		case 100:
		case 90:
			printf("A\n");
			break;
		case 80:
			printf("B\n");
			break;
		case 70:
			printf("C\n");
			break;
		default:
			printf("���\n");
			break;
	}

	return 0;
}