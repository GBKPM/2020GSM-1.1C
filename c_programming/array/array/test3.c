#include <stdio.h>
int main() {
	//수요일1. 100개 까지 0입력 중단 짝수 번째 출력
	int arr[100];
	int i = 0;
	int a = 0;
	for (i=0;i<101;i++) {
		printf("input number %d : ", i);
		scanf_s("%d", &arr[i]);
		if (arr[i] == 0)
			break;
	}
	for (a = 0; a <= 50; a++)
	printf("%d ", arr[i % 2 == 0]);

		//수요일2. 26개 A~Z 대입 후, 마지막부터 처음까지 출력
	/*char arr[26];
	arr[0] = 'A';
	int i = 0;
	for (i = 0; i < 26; i++) {
		putchar(arr[i] );
		arr[i] += 1;
	}*/
	return 0;
}