#include <stdio.h>
int main() {
	//106��
	/*int n;
	while (1) {
		printf("input num >> ");
		scanf_s("%d", &n);
		if (n == 0) break;
		else printf("%d �Է�\n", n);
	}*/


	//107��
	/*int i, count = 0, answer;
	printf("������ ������� ���ϱ�\n");
	printf("input num >> ");
	scanf_s("%d", &answer);
		for (i = 1; i < 101; i++) {
			if (i % answer != 0) continue;
			count++;
		}
		printf("1���� 100���� �� �߿��� %d�� ����� %d���Դϴ�.", answer, count);*/

		/*int i = 0;
		while (i++ < 10) {
			if (i == 7) continue;
			printf("%d ", i);
		}*/

		//108��
		/*int i, j;
		for (i = 2; i < 4; i++) {
			printf("%d��\n", i);
			for (j = 1; j < 10; j++) {
				printf("%d * %d = %d\n", i, j, i * j);
			}
			printf("\n");
		}*/

	//109��
	int start, end, tempstart, temp, sum = 0;
	printf("input 2 number >> ");
	scanf_s("%d %d", &start, &end);

	if (start > end) {
		temp = start;
		start = end;
		end = temp;
	}

	tempstart = start;
	
	for (; start < end + 1; start++) {
		sum += start;
	}
	printf("%d���� %d������ ���� %d�Դϴ�.", tempstart, end, sum);
	return 0;
}