#include <stdio.h>
int main() {
	//���ι����Է��Լ� 
	//scnaf_s(), getchar(), get_s()
	//�� �� ��ü�� �Էµ� ������ ��ٸ�
	//�� ġ�� -> �Է¹����� ���� ������ ����
	//�� �Է¹��ۿ� �״�� ���� -> ��ġ �ʴ� ������ �߻�
	// �Է��Լ��� �Է¹��۷κ��� �����͸� �о���̴µ�
	//�Է¹��ۿ� ������ ���� ���� ���� ������ �����͸� �б� ������

	char gender, attend;
	char name[20];

	puts("gender(M/F) : ");
	scanf_s("%c", &gender); // gender = getchar();
	puts("attend(Y/N): ");
	scanf_s("%*c%c", &attend); //%*c =getchar() �� ���� ���� ����
	puts("name : ");
	scanf_s("%s", name, sizeof(name));

	printf("%c %c %s\n", gender, attend, name);

	return 0;
}