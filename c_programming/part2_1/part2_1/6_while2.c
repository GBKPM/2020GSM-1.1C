#include<stdio.h>
int main() {
	//무한루프를 사용하여 1부터 10까지 출력하기
	/*int cnt = 1;
	while (1) {
		printf("%d ", cnt);
		cnt++;
		if (cnt > 10)
			break;
	}*/
	
	//키보드로 입력된 수가 3개일 때 반복문을 빠져나와 그 수들의 합을 출력하고,
	//단, 음수가 입력되면 다시 입력 받기 위해 continue문을 사용해서 작성해보자.
	//continue와break 차이 알기
	/*int num, cnt = 0, sum = 0;
	while (1) {
		printf("input number > ");
		scanf_s("%d", &num);
		if (num < 0)
			continue;
		sum += num;
		cnt++;
		if (cnt == 3)
			break;
	}
	printf("sum : %d\n", sum);*/
	
	//do~while 1부터 10까지 출력하기
	/*int cnt = 1;
	do {
		printf("%d ", cnt);
		cnt++;
	} while (cnt <= 10);*/

	//10부터 1까지 출력하는 프로그램
	/*int cnt = 10;
	do {
		printf("%d ", cnt);
		cnt--;
	} while (cnt >= 1);
	return 0;*/

	//do~while Z부터 A까지 출력하는 프로그램
	char ch = 'Z';
		do {
			printf("%c ", ch--);
		} while (ch >= 'A');

		return 0;
}