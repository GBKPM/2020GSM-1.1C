#include <stdio.h>
int main() {
	/*int num = 1;
	int i;
	for (i = 0; i < 10; i++) {
		switch (num) {
		case 1:
			printf("1ÀÔ´Ï´Ù.\n");
			goto EXIT;
		default:
			break;
		}
	}

EXIT:
	return 0;*/

	int num = 0, i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (num == 10) goto EXIT2;

			num++;
		}
	}

EXIT1:
	printf("100\n");
EXIT2:
	printf("200\n");
EXIT3:
	printf("300\n");
	
	return 0;
}