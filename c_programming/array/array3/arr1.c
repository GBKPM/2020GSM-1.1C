#include <stdio.h>
int main() {
	//2�����迭 ���� �� �ʱ�ȭ
	//int data[2][3] = { {1,2,3},{4,5,6} }; //1 2 3\n 4 5 6
	//int data[2][3] = { 1,2,3,4,5,6 };
	//int data[][3] = { 1,2,3,4,5,6 }; //�� �������� �� ���� �Ұ���
	//int data[2][3] = { 4,5 }; //4,5,0\n0,0,0

	//������ 118�� ������ �ذ��ϱ�
	int i, j;
	int a[2][3] = { 1,2,3,4,5,6 };
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}

	printf("�迭��ü�� ũ�� : %d\n", sizeof(a));
	printf("�� ���� ũ�� : %d\n", sizeof(a[0]));
	printf("�迭 ���� �ϳ��� ũ�� : %d\n", sizeof(a[0][0])); 
	return 0;
}