//#include <stdio.h>
//#include <stdbool.h>
//
//int main() {
//	int num = 0;
//
//	bool exitOuterLoop = false; //�ٱ��� ������ ���������� �����ϴ� ����
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			if (num == 20) {
//				exitOuterLoop = true; //�ٱ��� ������ ������������
//				break; //���� ������ ����
//			}
//			num++;
//		}
//		if (exitOuterLoop == true) //�ٱ��� ������ ���������ڴٰ� ����������
//			break; //�ٱ��� ������ ����
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