#include <stdio.h>
#include <string.h>

#define SIZE 100
int main() {
	//hang
	char answer[SIZE] = "hang";
	char trial[SIZE] = "____";
	char ch;
	//printf("%s", answer);
	int i = 0, o = 0;
	while (1) {
		printf("--------------------����----------------------\n");
		scanf_s(" %c", &ch);
		o++;
		for (i = 0; answer[i] != '\0'; i++) {
			if (ch == answer[i]) {
				trial[i] = ch;
				printf("���ڴ� ���� %s\n", trial);
			}
		}
		if (strcmp(trial, answer) == 0) {
			printf("����");
			printf("\n%d�� ���� ������ϴ�.\n", o);
			
			return 0;
		}
	}
}