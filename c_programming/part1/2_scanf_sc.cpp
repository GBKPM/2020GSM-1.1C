#include <stdio.h>
int main() {
	//scanf_s() 함수 : 키보드로부터 입력된 값을 읽어와서
	//형식문자에 맞게 변수에 저장
	/*형식지정자
	 %c : 문자 한개 scanf_s("%c", &ch);
	 %d : 정수형
	 %f(float), %lf(double) : 실수형
	 %s: 문자열 scanf_s("%s", name, sizeof(name));	
	*/
	int age;   //변수선언
	printf("input age: ");
	scanf_s("%d", &age);
	printf("age : %d \n", age);

	double height;
	printf("input height : ");
	scanf_s("%lf", &height);
	printf("height : %f\n", height);

	//문자와 문자열
	char grade;
	char name[20];
	printf("input grade: ");
	scanf_s("%*c%c", &grade);

	printf("input name: ");
	scanf_s("%s", name, sizeof(name));

	printf("name: %s, grade: %c\n\n", name, grade);




	return 0;

}