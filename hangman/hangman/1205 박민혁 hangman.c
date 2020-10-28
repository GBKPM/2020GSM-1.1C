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
		printf("--------------------문제----------------------\n");
		scanf_s(" %c", &ch);
		o++;
		for (i = 0; answer[i] != '\0'; i++) {
			if (ch == answer[i]) {
				trial[i] = ch;
				printf("문자는 정답 %s\n", trial);
			}
		}
		if (strcmp(trial, answer) == 0) {
			printf("성공");
			printf("\n%d번 만에 맞췄습니다.\n", o);
			
			return 0;
		}
	}
}