#include <stdio.h>
int main() {
	//�迭 ������ �Է�
	int arr[5];
	int i, size;
	int sum = 0;
	double avg = 0.0;

	for (i = 0; i < 5; i++)
		printf("input number >> ");
		scanf_s("%d ", &arr[i]);
	sum += arr[i];

	//��(sum)�� ���(avg)
	avg = sum / 5;
	printf("�հ� :%d, ��� :%.2f\n", sum, avg);
	
	return 0;
}