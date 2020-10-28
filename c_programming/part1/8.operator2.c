#include <stdio.h>
int main() {
	//관계(비교)연산자와 논리연산자 : 조건에 대한 처리-> 결과: 참(1), 거짓(0)
	//관계(비교)연산자 : <, <=, >, >= (대소비교), ==(같음), !=(다름) (상등비교)
	/*논리연산자 : && (모두 참일때 참, and 연산),
				  || (하나만 참이여도 참, or연산),
				  ! (1->0, 0->1, not연산)*/
	printf("10<15 => %d\n", 10 < 15);
	printf("10<=15 => %d\n", 10 <= 15);
	printf("10>15 => %d\n", 10 > 15);
	printf("10>=15 => %d\n", 10 >= 15);
	printf("10==15 => %d\n", 10 == 15);
	printf("10!=15 => %d\n", 10 != 15);

	printf("\n\n\n");
	printf(" [AND 진리표] \n%3s %3s | %3s\n", "X", "Y", "F");
	printf("-------------\n");
	printf("%3d %3d | %3d\n", 0, 0, 0 && 0);
	printf("%3d %3d | %3d\n", 0, 1, 0 && 1);
	printf("%3d %3d | %3d\n", 1, 0, 1 && 0);
	printf("%3d %3d | %3d\n", 1, 1, 1 && 1);

	printf("\n\n\n");
	printf(" [OR 진리표] \n%3s %3s | %3s\n", "X", "Y", "F");
	printf("-------------\n");
	printf("%3d %3d | %3d\n", 0, 0, 0 || 0);
	printf("%3d %3d | %3d\n", 0, 1, 0 || 1);
	printf("%3d %3d | %3d\n", 1, 0, 1 || 0);
	printf("%3d %3d | %3d\n", 1, 1, 1 || 1);
	return 0;
}