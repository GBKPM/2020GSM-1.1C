//#include <stdio.h>
//#include <stdbool.h>
//
//int main() {
//	int num = 0;
//
//	bool exitOuterLoop = false; //바깥쪽 루프를 빠져나올지 결정하는 변수
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			if (num == 20) {
//				exitOuterLoop = true; //바깥쪽 루프도 빠져나가겠음
//				break; //안쪽 루프를 끝냄
//			}
//			num++;
//		}
//		if (exitOuterLoop == true) //바깥쪽 루프도 빠져나오겠다고 결정했으면
//			break; //바깥쪽 루프를 끝냄
//	}
//	printf("%d\n", num);
//	return 0;
//}
#include <stdio.h>

int main() {
	int num = 0;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (num == 20) goto EXIT;
			num++;
		}
	}
EXIT:
	printf("%d\n", num);
	return 0;
}