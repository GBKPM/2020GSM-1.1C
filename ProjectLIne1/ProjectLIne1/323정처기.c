#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int p = 0, n, jum, hap = 0, avg = 0, min, max;
	max = 0, min = 10000;
C:
	printf("���� ���� �Է�: ");
	scanf_s("%d", &n);
	if (n > 10000) {
		printf("10000�̻��� ���� �ٽ� �Է��ϻ�\n");
		goto C;
	}
A:
	printf("���� �Է�: ");
	scanf_s("%d", &jum);
	if (jum > 100 || jum < 0)
		goto B;
	p++;
	hap = hap + jum;
	if (max < jum)
		max = jum;
	if (min > jum)
		min = jum;
	if (p == n) {
		hap = hap - (max + min);
		avg = hap / (n - 2);
		printf("���: %d", avg);
	}
	else
		goto A;
	return 0;
B:
	printf("0~100���̰� �ƴ� ������ �ֳ�?");
	return 0;
}