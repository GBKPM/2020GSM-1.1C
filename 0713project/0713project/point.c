#include <stdio.h>
#include<string.h>
int mystrcpy(char* ps, char* pd) {
	while (*pd != 0) {
		*ps++ = *pd++;
		/*ps++;
		pd++;*/
	}
	*ps = '\0';
}
int mystrlen(char *ps) {
	int cnt = 0;
	while (*ps != 0) {
		cnt++;
		ps++;
	}
	return cnt;
}
int mystrcat(char* ps, char* pd) {
	//1. *ps������
	//2. *ps���������� *pd����
	while (*ps != 0) {
		ps++;
	}
	while(*pd != 0) {
		*ps++ = *pd++;
	}
	*ps = '\0'
}
int main() {
	/*//���ڹ迭: char str[20] = "started C"; //�б�, ���� ����
	//���ڿ����: char* msg = "advanced C"; //���ڿ� ������ �� ����
	
	char str[20] = "started C";
	char* msg = "advanced C";
	str[0] = 'S'; //�а��� ����
	printf("%s\n", str);
	printf("%s\n", msg);
	//msg[0] = "A"; //�а��� �Ұ��� ����Ұ�
	printf("%s\n", msg + 3); //0��° a����ϰ� 4�������� ������ ���
	
	while (*msg != 0) {
		putchar(*msg);
		msg++;
	}*/
	
	//mystrcpy(), mystrlen(), mystrcat(), mystrcmp()
	char str1[100] = "string1";
	char str2[100] = "string2";
	strcpy(str1, str2);
	printf("%s\n", str1);
	strcpy(str1, "banana");
	printf("%s\n", str1);
	mystrcpy(str1, str2);
	printf("%s\n", str1);

	printf("%d��\n", strlen(str1));
	printf("%d��\n", mystrlen(str1));

	strcat(str1, str2);
	printf("%s\n", str1);
	mystrcat(str1, str2);
	printf("%s\n", str1);
}