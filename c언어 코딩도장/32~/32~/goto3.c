#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <stdbool.h>
int main() {
	int gender; //����: ���� 1, ���� 2
	int age; //����
	int isOwner; //���� ���� ����: �ڰ� 1, ������ 0

	scanf_s("%d %d %d", &gender, &age, &isOwner);

	printf("�ȳ��ϼ���\n");
	printf("���� ����.\n");

	if (gender == 2)
		goto EXIT;

	if (age <= 29)
		goto EXIT;

	if (isOwner == 0)
		goto EXIT;
EXIT:
	printf("�ȳ����輼��.\n");
	printf("���� �ݴ´�.\n");
	return 0;
}