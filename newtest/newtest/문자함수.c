#include <stdio.h>
#include <string.h>
int main() {
	//strlen(str) ���ڿ� ���� ��ȯ(null����x) ex)king=4
	//strcpy(to, from) from���ڿ��� to ���ڿ��� ����
	//strcat(to, from) from���ڿ��� to�� �߰��Ǿ� ���ڿ� ����
	//strcmp(str1, str2) �� ���ڿ� ��(return value) 0=str1==str2 ��� str1>str2 ���� str1<str2
	/*char from[10] = "king", to[10] = "";
	printf("�迭�� ũ��: %d, ���ڿ��� ����: %d\n", sizeof(from), strlen(from));
	printf("from: %p, to: %p\n", from, to);
	printf("from: %s, to: %s\n", from, to);*/

	/*char from[10] = "king", to[10] = "";
	printf("from: %s, to:%s\n", from, to);

	strcpy(to, from);
	printf("from: %s, to: %s\n", from, to);

	strcat(to, "dom");
	printf("from: %s, to: %s\n", from, to);

	//4+5>10
	if (strlen(from)+strlen("queen")>=sizeof(from))
		printf("����");
	else {
		strcat(from, "queen");
		printf("%s", from);
	}*/

	char from[10] = "king", to[10] = "king";
	printf("from: %s, to: %s\n", from, to);

	if (from == to)//���ڿ� �ּҺ�
		printf("%s, %s=> �� ���ڿ��� ����.\n", from, to);
	else
		printf("%s, %s=> �� ���ڿ��� ���� �ʴ�.\n", from, to);

	if (strcmp(from, to) == 0) //���ڿ��� �Լ� ���
		printf("%s, %s=> �� ���ڿ��� ����.\n", from, to);
	else
		printf("%s, %s=> �� ���ڿ��� �����ʴ�.\n", from, to);

	printf("abc abc = %d\n", strcmp("abc", "abc"));
	printf("ABC abc = %d\n", strcmp("ABC", "abc"));
	printf("abc ABC = %d\n", strcmp("abc", "ABC"));
	return 0;
}