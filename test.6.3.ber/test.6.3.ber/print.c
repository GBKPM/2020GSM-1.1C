#include <stdio.h>
int main() {
	//1. �̸��� ���� �Է�, �ѹ��� ���(�̸� gets, ���� scanf_s, ��� printf)
	int m;
	char n[100];
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d%*c", &m); //scanf�� ���� ������ ������ �����ϴ� %*c�� �־�� �Ѵ�.
	printf("�̸��� �Է��ϼ���: ");
	gets_s(n, sizeof(n)); 
	printf("�̸��� %s, ���̴� %d�Դϴ�.", n, m);

	//2. �� ���� �Է�, x��y�� ����
	//int x, y;
	//printf("�� ���� �Է�: ");
	//scanf_s("%d %d", &x, &y);
	//printf("x: %d, y: %d", x, y);
	return 0;
}