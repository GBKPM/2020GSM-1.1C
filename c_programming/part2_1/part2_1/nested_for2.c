#include<stdio.h>
int main() {
	/*
	i : ��(�ٱ��� for�� 0~4)
	j : ��(���� for�� 0~4)
	*
	**
	***
	****
	*****
	��Ģ: i=j�� �������� *�� ������
	*/

	//int i, j;
	//for (i = 0; i < 5; i++) {
	//	for (j = 1; j > 0 - i; j--) {
	//		printf("*");
	//	}
	//	printf("\n");
	//} printf("\n\n");
	///*
	//i, j �״�� ���� �ʱ�ȭ�� �� ��
	//	   *
	//	  **
	//   ***
	//  ****
	// *****
	//��Ģ: ������Ⱑ �߿�
	//*/
	//for (i = 0; i < 5; i++) {
	//	for (j = 0; j < 4 - i; j++) {
	//		printf(" ");
	//	}
	//	for (j = 4 - i; j < 5; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//printf("\n\n");
	///*
	//*****
	//****
	//***
	//**
	//*
	//*/

	//for (i = 0; i < 5; i++) {
	//	for (j = 0; j < 5 - i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//printf("\n\n");
	///*

	//*****
	// ****
	//  ***
	//   **
	//	*
	//*/

	//for (i = 0; i < 5; i++) {
	//	for (j = 0; j < i; j++) {
	//		printf(" ");
	//	}

	//		for (j = 0; j < 5 - i; j++) {
	//			printf("*");
	//		}
	//	printf("\n");
	//}
	//printf("\n\n");

	//12345
	int i, j;
	int n = 1;
	for (i = 0; i < 5; i++) {
		for (j = 0; j <= i; j++) {

			printf("%d", n);
			n++;
		}
		printf("\n");
	}


	//12345 abcde
	//char ch = 'a';
	//for (i = 0; i < 5; i++) {
	//	for (j = 5; j > 4 - i; j--) {
	//		printf("%c", ch);
	//		ch++;
	//	}

	//	for (j = 4; j > i; j--) {
	//		printf("%d", n);
	//		n++;
	//	}
	//	printf("\n");
	//}
	//printf("\n\n");
	return 0;
}