#include <stdio.h>
#include <string.h>
int main() {
	//strlen(str) 문자열 길이 반환(null포함x) ex)king=4
	//strcpy(to, from) from문자열이 to 문자열에 복사
	//strcat(to, from) from문자열이 to에 추가되어 문자열 결합
	//strcmp(str1, str2) 두 문자열 비교(return value) 0=str1==str2 양수 str1>str2 음수 str1<str2
	/*char from[10] = "king", to[10] = "";
	printf("배열의 크기: %d, 문자열의 길이: %d\n", sizeof(from), strlen(from));
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
		printf("실패");
	else {
		strcat(from, "queen");
		printf("%s", from);
	}*/

	char from[10] = "king", to[10] = "king";
	printf("from: %s, to: %s\n", from, to);

	if (from == to)//문자열 주소비교
		printf("%s, %s=> 두 문자열은 같다.\n", from, to);
	else
		printf("%s, %s=> 두 문자열은 같지 않다.\n", from, to);

	if (strcmp(from, to) == 0) //문자열비교 함수 사용
		printf("%s, %s=> 두 문자열은 같다.\n", from, to);
	else
		printf("%s, %s=> 두 문자열은 같지않다.\n", from, to);

	printf("abc abc = %d\n", strcmp("abc", "abc"));
	printf("ABC abc = %d\n", strcmp("ABC", "abc"));
	printf("abc ABC = %d\n", strcmp("abc", "ABC"));
	return 0;
}