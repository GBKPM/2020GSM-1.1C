#include <stdio.h>
struct data {
	char name[20];
	int height;
	double weight;
};

struct data stu[5];

void input() {
	for (int i = 0; i < 5; i++) {
		scanf_s("%s %d %d", stu[i].name, stu[i].height, stu[i].weight);
	}
}

void sort() {
	
}

void output() {
	for (int i = 0; i < 5; i++) {
		printf("%s %d %d", stu[i].name, stu[i].height, stu[i].weight);
	}
}

int main() {
	//5명의 이름과 키, 몸무게를 입력받아 키가 작은 순서대로 
	//오름차순으로 정렬하여 출력하는 프로그램
	
	input(); //5명의 이름, 키, 몸무게 입력받는 함수
	sort(); //정렬하는 함수: 키-오름차순으로
	output(); //5명의 이름, 키, 몸무게 출력하는 함수
}