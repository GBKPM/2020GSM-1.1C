#include <stdio.h>
int num1; //�ʱ�ȭ�� ���� �ʾƵ� 0�� ��
int num2;
void call() {
	num1 = 10;
	num2 = num1 * 2;
	printf("%d\n", num2);
}
int main()
{
	call();
	printf("main : %d\n", num2);
	return 0;
}