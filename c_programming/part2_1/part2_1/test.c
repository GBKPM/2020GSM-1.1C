//#include<stdio.h>
//int main() {
//	int score;
//	printf("input : ");
//	scanf_s("%d", &score);
//	if (score>=0 && score<=100)
//		printf("�Է��� ������ 0���� 100���̿� �ֽ��ϴ�.\n");
//	else
//		printf("�Է��� ������ 0~100������ ���� �ƴմϴ�.");
//	return 0;
//}



#include<stdio.h>
int main() {
	int A, B;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &A);
	switch (A) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 10:
	case 12:
		B = 31;
		break;
	case 2:
		B = 28;
		break;
	default:
		B = 30;
		break;
	}
	printf("%d���� �ϼ��� %d���Դϴ�.\n", A, B);
	return 0;
}