#include <stdio.h>
struct  myGrade
{
	char* name;
	int kor;
	int eng;
	int math;
};

void grade(char *name, int a, int b, int c) {
	printf("%s %d %d %d\n", name, a, b, c);
}

void grade2(struct myGrade st) {
	printf("%s %d %d %d\n", st.name, st.kor, st.eng, st.math);
}

void grade3(struct myGrade *stu, int n) {
	for (int i = 0; i < n; i++) {
		printf("stu. %s %d %d %d\n", stu[i].name, stu[i].kor, stu[i].eng, stu[i].math);
		printf("->   %s %d %d %d\n", (stu + i)->name, (stu + i)->kor, (stu + i)->eng, (stu + i)->math);
	}
}

int main() {
	struct myGrade hong = { "홍길동", 100, 100, 100 };
	struct myGrade stu[2] = {
		{"강산하", 50,50,50},
		{"강정원", 80,80,80}
	};

	grade("홍길동", 100, 100, 100); //학생 이름, 국, 영 수 점수를 출력하는 함수
	printf("====================\n");
	grade2(hong); //학생서험정보 출력하는 함수

	printf("====================\n");
	grade3(stu, 2); //함수 정의 및 선언

	printf("====================\n");
	grade2(stu[0]); //어떤 함수로 호출?
	grade2(stu[1]); //어떤 함수로 호출?

	return 0;
}