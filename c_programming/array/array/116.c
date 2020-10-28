#include <stdio.h>
int main() {
	//배열의 꽃은 문자열 : 문자가 2개이상 있는것 'c': %c, "c" : %s, '':문자, "":문자열-배열저장
	char str[100]; //배열은 배열의 이름 자체가 주소이다.
	int alp[26] = { 0 };
	int i = 0;
	printf("input string >> ");
	scanf_s("%s", str, sizeof(str)); //문자열: sizeof넣기, 주소연산자X
	
	while (str[i] != '\0') {
		++alp[str[i] - 97];
		i++;
	}

	printf("입력한 문자열 : %s\n", str);
	for (i = 0; i < 26; i++) {
		if (alp[i] != 0)
			printf("%c : %d\n", i + 97, alp[i]);
	}
	
	
	return 0;
}//숙제:116 해석 //학교오면 시험이다!!!