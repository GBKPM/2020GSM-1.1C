#include <stdio.h>
int main() {
	//15. �� ���� �Է� �ִ밪 ���ϱ�(if���� ���� 2��)
	//int a, max;
	//printf("ù��° ���� �Է�: ");
	//scanf_s("%d", &a);
	//max = a;
	//printf("�ι�° ���� �Է�: ");
	//scanf_s("%d", &a);
	//if (max < a) max = a;
	//printf("����° ���� �Է�: ");
	//scanf_s("%d", &a);
	//if (max < a) max = a;
	//printf("�ִ밪: %d", max);
	//16. �⺻��� 1000�� 20���̸� 25%���� 20���̻� ����x
	//(age, fee 2���� ������ ���, ��� ����ؼ� ���
	int age, fee = 1000;
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &age);
	
	if (age < 20) fee = fee * 75 / 100;

	printf("����� %d�� �Դϴ�.", fee);
	return 0;
}