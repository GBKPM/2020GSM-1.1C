#include <stdio.h>
int main() {

    //������ 1��. 1~100 2�� ��� �� ���ϱ�
    int number = 1, num = 0;
    while (number <= 100) {
        if (number % 2 == 0) {
            num += number;
        }
        number++;
    }
    printf("1���� 100������ �� �� 2�� ����� ���� %d�Դϴ�.", num);


    //������ 2��. arr[10] ���, 10���� ������ ����°, �ٹ�°(?), ������ ���� ���
    int arr[10] = { 0 };
    int i = 0;
    for (i = 0; i < 10; i++) {
        printf("input number %d : ", i);
        scanf_s("%d", &arr[i]);
    }
    printf("%d %d\n", arr[2], arr[9]); //�ٹ�°�� ����...
        return 0;
}