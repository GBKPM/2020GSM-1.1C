#include <stdio.h>
#include <string.h>
struct info {
	char sNum[10];
	char name[20];
	char tel[15];
};
int main() {
	struct info s[5] = {
		{"s2001002","강대영","010-1234-0001"},
		{"s2006012","김길수","010-1234-0002"},
		{"s2011007","이미영","010-1234-0003"},
		{"s2012005","이도엽","010-1234-0004"},
		{"s2016001","권순동","010-1234-0005"}
	};
	//사원이름을 입력받아, 사번, 전화번호 출력하게
	//없는 사원이면 "사원이 없습니다."출력하게

	//1. 사원이름 입력받기
	char sname[20];
	int i;
	printf("검색할 사원 이름 입력: ");
	scanf_s("%s", sname, 20);
	for (i = 0; i < 5; i++) {
		if (strcmp(s[i].name, sname) == 0)
			printf("%s\n%s\n", s[i].sNum, s[i].tel);
	}

	if(i == 5)
		printf("사원이 없습니다.\n");
	//2. 사원이름있는지 검사(어떻게?) (어디서?)
	// -> if문 : 사원이름비교 : strcmp 0 : 출력
	// -> for문 : s배열에 있는 자료에서 데이터 가져와서
	//3. 결과 출력
	
	return 0;
}