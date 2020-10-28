#include <stdio.h>
int main() {
	//106쪽
	/*int n;
	while (1) {
		printf("input num >> ");
		scanf_s("%d", &n);
		if (n == 0) break;
		else printf("%d 입력\n", n);
	}*/


	//107쪽
	/*int i, count = 0, answer;
	printf("정수의 배수개수 구하기\n");
	printf("input num >> ");
	scanf_s("%d", &answer);
		for (i = 1; i < 101; i++) {
			if (i % answer != 0) continue;
			count++;
		}
		printf("1부터 100까지 수 중에서 %d의 배수는 %d개입니다.", answer, count);*/

		/*int i = 0;
		while (i++ < 10) {
			if (i == 7) continue;
			printf("%d ", i);
		}*/

		//108쪽
		/*int i, j;
		for (i = 2; i < 4; i++) {
			printf("%d단\n", i);
			for (j = 1; j < 10; j++) {
				printf("%d * %d = %d\n", i, j, i * j);
			}
			printf("\n");
		}*/

	//109쪽
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
	printf("%d부터 %d까지의 합은 %d입니다.", tempstart, end, sum);
	return 0;
}