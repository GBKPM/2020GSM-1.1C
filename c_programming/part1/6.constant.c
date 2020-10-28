#include <stdio.h>
#define EVEN 2
#define ODD 1
#define MSG "============="

int main() {

	/*상수
	1. 변경되지 않는 고정된 값(직접 값을 입력(지정)하는 것): int age=12;
	2. 리터럴 상수와 기호상수
	- 리터럴 상수 : 이름을 갖지 않는 상수, 초기값을 설정할 때 사용되는 상수
		예) int age=12; 12->리터럴 상수(상수)
			char ch = 'a' : a -> 상수
	- 기호상수 : 변수처럼 선언하고, const 키워드가 추가
				변수명은 보통 대문자로 지정
				선언과 동시에 반드시 초기화해야 함
				상수의 값은 중간에 변경 불가
		예) const double PI=3.14;
	*/

	/*const double PI = 3.14; //선언과 동시에 초기화
	double r; //변수
	r = 9.0;
	printf("반지름이 %f인 원의 면적은 %f\n", r, r * r * PI);
	r = 10.0;
	//PI = 3.1415; //오류, 선언문 외에 값 변경 불가
	*/
	/*매크로 상수
	 1. #define문에 정의 되는 상수
	 2. #으로 시작하니까 전처리기에 의해 해석되는거지
	 3. 매크로 상수들은 매크로 값으로 모두 치환 되어 프로그램에 사용
	*/

/*#define EVEN 2
#define ODD 1
#define MSG "============="
*/
	printf("%s\n", MSG);
	printf("EVEN : %d\n", EVEN);
	printf("ODD : %d\n", ODD);
	printf("%d +%d = %d\n", EVEN, ODD, EVEN + ODD);
	printf("%s\n", MSG);
	return 0;
}