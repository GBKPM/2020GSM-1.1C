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
	struct myGrade hong = { "ȫ�浿", 100, 100, 100 };
	struct myGrade stu[2] = {
		{"������", 50,50,50},
		{"������", 80,80,80}
	};

	grade("ȫ�浿", 100, 100, 100); //�л� �̸�, ��, �� �� ������ ����ϴ� �Լ�
	printf("====================\n");
	grade2(hong); //�л��������� ����ϴ� �Լ�

	printf("====================\n");
	grade3(stu, 2); //�Լ� ���� �� ����

	printf("====================\n");
	grade2(stu[0]); //� �Լ��� ȣ��?
	grade2(stu[1]); //� �Լ��� ȣ��?

	return 0;
}