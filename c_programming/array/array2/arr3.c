#include <stdio.h>
int main() {
	int data[100] = { 0 };
	int i, cnt;

	for (i = 0; i < 100; i++) {
		printf("input number >> ");
		scanf_s("%d",&data[i]);
		if (data[i] == 0) break;
	}

	cnt = i;
	for (i = 1; i < cnt; i=i+2)
		printf("%d ", data[i]);
	printf("\n");

	return 0;
}