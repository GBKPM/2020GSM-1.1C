#include <stdio.h>
int main() {
	//10진수를 2진수로 변환
	int freq[5] = { 0 };
	int i = 0, sel;
	printf("10진수를 입력하세요 >> ");
	scanf_s("%d", &sel);
	while (1) {
		if (sel < 0) break; //종료
		freq[sel - 1]++;
	}
	printf("2진수는 다음과 같습니다.\n");
	printf("%d %d\n", i + 1, freq[i]);
	return 0;
}