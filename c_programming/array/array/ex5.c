#include <stdio.h>
int main() {
	//����
	//�������� : ������->ū�� 1,2,3 or a,b,c...
	//�������� : ū��->������ 10,9,8 or z,y,x...

	//��������
	int data[5] = { 94,7,67,120,1 };
	int i, j, tmp;
	printf("\n=====���� ��=====\n");
	for (i = 0; i < 5; i++)
		printf("%4d", data[i]);
	printf("\n\n");

	for (i = 0; i < 5 - 1; i++) {
		for (j = 0; j < 4 - i; j++) {
			if (data[j] > data[j + 1]) {
				tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}
		printf("\n%d�� ����\n", i + 1);
		for (j = 0; j < 5; j++)
			printf("%4d", data[j]);
	}
	printf("\n\n=====���� ��=====\n");
	for (i = 0; i < 5; i++)
		printf("%4d", data[i]);
	return 0;
}