#include <stdio.h>
int main() {
	/*������ �� 3������ ������ �Է¹޾� ����� ���� ��,
	�ݿø��Ͽ� �Ҽ� ù°�ڸ����� ����غ���*/
	/*int a, b, c, d;
	double e;
	puts("3���� ������ �Է��ϼ���\n");
	scanf_s("%d%d%d", &a, &b, &c);
	d = a + b + c;
	e = d / 3.0;
	printf("����� %.1f�Դϴ�.\n", e);*/
	/*�Ǽ��� yard�� �Է¹޾� cm�� ȯ���� ����
	  �ݿø��Ͽ� �Ҽ� ù°�ڸ����� ����غ���
	  (1yard=91.44cm)*/
	double yard, cm;
	puts("input yard? ");
	scanf_s("%lf", &yard);
	cm = yard * 91.44;
	printf("%.2f yard�� %.2f cm�Դϴ�.\n",yard, cm);
	return 0;
}