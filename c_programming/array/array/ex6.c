#include <stdio.h>
int main() {
	//�������� 1. �ּҰ� ã��
	int data[5] = { 94,7,67,120,1 };
	int i, j, tmp, min;

	printf("\n=====���� ��=====\n");
	for (i = 0; i < 5; i++)
		printf("%4d", data[i]);

	for (i = 0; i < 4; i++) {
		min = i;
		for (j = i + 1; j < 5; j++) {
			if (data[min] > data[j])
				min = j; //�迭 ��� �� �ּҰ��� �ִ� ��ġ�� min�� ����.
			
			//�ּҰ��� i��° ��Ұ� �ڸ��ٲٱ�
			tmp = data[min];
			data[min] = data[i];
			data[i] = tmp;
		}
	}
	printf("\n\n=====���� ��=====\n");
	for (i = 0; i < 5; i++)
		printf("%4d", data[i]);
	//j��ġ����
	return 0;
}