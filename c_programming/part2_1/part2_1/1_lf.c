#include<stdio.h>
int main() {
	/*if ���밪 ���ϱ�*/
	/*int num;
	printf("input integer : ");
	scanf_s("%d", &num);
	if (num < 0) {
		num = num * -1;
		//num = -num;
	}
	printf("input number(���밪) : %d\n", num);*/

	//�ҹ��ڸ� �빮�ڷ� �ٲٱ�
	/*char ch;
	printf("�ҹ��ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &ch);
	if (ch >= 'a' && ch <= 'z')
		ch -= 32; //ch = ch - 32;
	printf("%c\n", ch);*/

	/*if~else Ȧ�� ¦�� �Ǻ��ϱ�*/
	/*int a;
	printf("input number : ");
	scanf_s("%d", &a);
	if (a%2==0)
	{
		printf("%d�� ¦��", a);
	}
	else
	{
		printf("%d�� Ȧ��", a);
	}*/

	//(����) ������ �Է¹޾� 80�� �̻��̸� �հ�, �ƴϸ� ���հ� ����ϱ�
	int a;
	printf("������? ");
	scanf_s("%d", &a);
	if (a >= 80) {
		printf("�հ�");
	}
	else {
		printf("���հ�");
	}
	return 0;
}