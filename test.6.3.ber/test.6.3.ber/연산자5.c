#include <stdio.h>
int main() {
	//13. �� ���� �Է� �ִ밪 ���ϱ�(scanf_s�ѹ� ���)
	int a, b, c, max;
	printf("�� ���� �Է�: ");
	scanf_s("%d %d %d", &a, &b, &c);
	max = a < b ? b : a;
	max = max < c ? c : max;
	printf("�ִ밪: %d", max);
	
	//14. ���� �� ���ʷ� �Է�, �ִ밪 ���ϱ�
	//int a, b, c, max;
	//printf("ù��° ���� �Է�: ");
	//scanf_s("%d", &a);
	//printf("�ι�° ���� �Է�: ");
	//scanf_s("%d", &b);
	//printf("����° ���� �Է�: ");
	//scanf_s("%d", &c);
	//max = a < b ? b : a;
	//max = max < c ? c : max;
	//printf("�ִ밪: %d", max);
	return 0;
}