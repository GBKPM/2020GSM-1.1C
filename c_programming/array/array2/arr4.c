#include <stdio.h>
int main() {
	char ch[26];
	int i;

	for (i = 0; i < 26; i++)
		ch[i] = 'A' + i;

	for (i = 25; i >= 0; i--)
		printf("%2c ", ch[i]);
	printf("\n");

	return 0;
}