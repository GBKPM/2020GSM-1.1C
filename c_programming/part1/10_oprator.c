#include <stdio.h>
int main() {
	//���Կ����ڿ� ������ ��ȯ
	// = : ���Կ�����
	// 1-value = r-value : r-value���� 1-value�� ����(����)
	//1-value���� ��������� ���� �͵��� �;���(����, �迭 ��)

	int x = 45, y = 98;
	int temp;
	printf("before x = %d, y = %d\n", x, y);
	temp = x;
	x = y;
	y = temp;
	printf("after x = %d,y = %d\n", x, y);

	//���մ��Կ�����
	// x=x+y x+=y
	// x=x-y x-=y
	// x=x*y x*=y
	// x=x/y x/=y

	return 0;
}