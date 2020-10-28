#include <stdio.h>
#include <string.h>
int main() {
	/*char s[3][6] = {
		"init",
		"open",
		"close"
	};
	for (int i = 0; i < 3; i++) {
			printf("%s\n", s[i]);
	}
	s[0][0] = 'a';
	printf("%s", s[0]);*/

	/*char names[3][20];
	int i;
	for (i = 0; i < 3; i++) {
		printf("%d 성명?", i + 1);
		gets_s(names[i], sizeof(names[i]));
	}

	printf("\n\n입력 결과 출력\n");
	for (i = 0; i < 3; i++)
		printf("%s\n", names[i]);*/

	/*char a[100];
	scanf_s("%s", a, 100);
	printf("%s", a);*/

	/*char b[20] = "Hong Gil Dong";
	int i;
	for(i=2;i<7;i++)
		printf("%c", b[i]);
	printf("\n");
	for (i = 5; i < 13; i++)
		printf("%c", b[i]);*/
	
	char a[100];
	int i = 0;
	scanf_s("%s", a, 100);
	printf("strlen: %d", strlen(a));
	printf("\n");
	for (i=0; a[i] < 0; i--) {
		printf("%s", a[i]);
	}
	i = 0;
	while(a[i]!=0) {
		i++;
	}
	printf("while: %d", i);

	return 0;
}