#include <stdio.h>
int main() {
	//10������ 2������ ��ȯ
	int freq[5] = { 0 };
	int i = 0, sel;
	printf("10������ �Է��ϼ��� >> ");
	scanf_s("%d", &sel);
	while (1) {
		if (sel < 0) break; //����
		freq[sel - 1]++;
	}
	printf("2������ ������ �����ϴ�.\n");
	printf("%d %d\n", i + 1, freq[i]);
	return 0;
}