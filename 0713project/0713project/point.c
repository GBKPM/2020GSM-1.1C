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
	//1. *ps끝으로
	//2. *ps끝에서부터 *pd복사
	while (*ps != 0) {
		ps++;
	}
	while(*pd != 0) {
		*ps++ = *pd++;
	}
	*ps = '\0'
}
int main() {
	/*//문자배열: char str[20] = "started C"; //읽기, 쓰기 가능
	//문자열상수: char* msg = "advanced C"; //문자열 변경할 수 없음
	
	char str[20] = "started C";
	char* msg = "advanced C";
	str[0] = 'S'; //읽고쓰기 가능
	printf("%s\n", str);
	printf("%s\n", msg);
	//msg[0] = "A"; //읽고쓰기 불가능 변경불가
	printf("%s\n", msg + 3); //0번째 a출력하고 4번쨰부터 끝까지 출력
	
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

	printf("%d개\n", strlen(str1));
	printf("%d개\n", mystrlen(str1));

	strcat(str1, str2);
	printf("%s\n", str1);
	mystrcat(str1, str2);
	printf("%s\n", str1);
}