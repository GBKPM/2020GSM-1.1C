#include <stdio.h>
int main() {
	//후보 1,2,3,4,5
	//1~5까지의 후보 투표결과 집계
	//사용자가 1~5입력 -> 각각 몇 표식 받았는지 출력하는 프로그램
	//무한반복, 종료조건(음수면 종료)]
	//다른번호는 입력하지 않는다고 가정함

	int freq[5] = { 0 };
	int i, sel;
	while (1) {
		printf("몇번후보를 선택할꺼야?(1~5)-종료(-1) >> ");
		scanf_s("%d", &sel);
		if (sel < 0) break; //종료
		freq[sel - 1]++;
	}

	printf("득표결과\n");
	for (i = 0; i < 5; i++)
		printf("%d후보 : %d표\n", i + 1, freq[i]);


	return 0;
}