#include <stdio.h>

int get_Max(int x, int y) {
	if (x >= y) return x;
	else return y;
}

int main() {
	//�� �� �߿��� ū���� ã�� �Լ�
	int a, b, c;
	int max;
	printf("input 2 number>> ");
	scanf_s("%d%d", &a, &b);
	max = get_Max(a, b);
	printf("�� �� �� ū ���� %d�Դϴ�.\n", max);
	
	printf("input 3 number>> ");
	scanf_s("%d%d%d", &a, &b, &c);
	max = get_Max(get_Max(a, b), c);
	printf("�� �� �� ū ���� %d�Դϴ�.\n", max);
	
	return 0;

}