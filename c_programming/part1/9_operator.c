#include <stdio.h>
int main() {
	//���ǿ�����(3�׿�����) ? :
	// (����) ? ������ ���϶� �� : ������ �� ��

	/*//���, ���� �Ǻ� ���α׷�
	int num;
	printf("input integer : ");
	scanf_s("%d", &num);
	printf("%s", (num < 0) ? "����" : "���");*/

	//�ҹ��ڸ� �빮�ڷ� a A
	/*char ch; //���� �ϳ�
	printf("�ҹ��ڸ� �빮�ڷ� ��ȯ �մϴ�.\n�ҹ��ڸ� �Է��ϼ��� >");
	scanf_s("%c", &ch);
	ch = (ch >= 'a' && ch <= 'z') ? ch - 32 : ch;
	printf("%c\n", ch);*/

	//�� ������ �Է� �޾� ���� ū ���� ����ϱ�
	int a, b, c, max;
	puts("3���� ������ �Է��ϼ���.");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("input number: %d %d %d\n", a, b, c);

	max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	printf("���� ū �� : %d\n", max);
	return 0;
}