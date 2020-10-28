#include <stdio.h>
#include <string.h>
int main() {
	/*char str[3][20] = {"park","min","hyon"};
	for(int i=0;i<3;i++)
		printf("%s ", str[i]);*/

		/*char str[20] = "programming";
		int i = 0, cnt = 0;
		while (str[i] != 0)
			i++;
		printf("문자 길이(널 포함 x): %d\n", i);
		for (i=i-1; i >= 0; i--) {
			printf("%c", str[i]);
		}
		printf("\n");
		int len;
		len = strlen(str);
		for (i = len - 1; i >= 0; i--) {
			printf("%c", str[i]);
		}*/

		/*char str[20] = "programming test";
		int su[5];
		int len, i;
		len = strlen(str);
		printf("길이는 %d입니다.\n", len);
		for (i = 0; i < 5; i++)
			scanf_s("%d", &su[i]);

		for (i = 0; i < 5; i++)
			printf("%c", str[su[i]]);*/

			/*char str[100];
			int i,len;
			gets_s(str, 100);
			len = strlen(str);
			for (i = 0; i < len; i++) {
				printf("%c", str[i]);
				if (str[i] == ' ')
					printf("\n");
			}*/

	char str[50];
	int i, len, temp;
	gets_s(str, 50);
	len = strlen(str);
	printf("%d\n", len);
	for (i = 0; i < len; i++) {
		temp = str[0];
		for (int j = 0; j < len - 1; j++)
			str[j] = str[j + 1];
		str[len - 1] = temp;
		printf("%s\n", str);
	}
	
	return 0;
}