#include <stdio.h>
int main() {
	//50���� 100���� �� Ȧ�� ���� Ȧ�� �� ���ϱ�
	int i, sum = 0, cnt = 0;
	for (i = 50; i < 100; i++) {
		if (i % 2 == 1) {
			cnt++;
			sum += i;
		}
	}
	printf("Ȧ���� ����: %d\nȦ���� ��: %d", cnt, sum);
	return 0;
}