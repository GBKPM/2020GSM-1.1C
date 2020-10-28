#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	char star[50] = ""; //난수0일때 * 문자 추가
	char percent[50] = ""; //난수0일때 % 문자 추가
	char sharp[50] = ""; //난수0일때 # 문자 추가
	int s = 0, p = 0, sh = 0;
	int i, randNum;
	
	srand((unsigned)time(0));//난수 초기화 부분 unsigned는 음수X라는 뜻
	//배열에다가 문자 저장...
	for (i = 0; i < 50; i++) {
		randNum = rand() % 3;
		switch (randNum) {
		case 0:
			star[s] = '*';
			s++;
			break;
		case 1:
			percent[p] = '%';
			p++;
			break;
		case 2:
			sharp[sh] = '#';
			sh++;
			break;
		}
	}

	//각 배열 출력
	printf("star : %s, count : %d\n", star, s);
	printf("percent : %s, count : %d\n", percent, p);
	printf("sharp : %s, count : %d\n", sharp, sh);
	return 0;
}