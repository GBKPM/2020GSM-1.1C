#include <stdio.h>
int main() {
    //ȭ���� 1��. arr[10] ���� ū �� ���
   /* int arr[10] = { 0 };
    int i = 0, a = 0;
    for (i = 0; i < 10; i++) {
        printf("input number %d : ", i);
        scanf_s("%d", &arr[i]);
        if (arr[i] > a)
            arr[i] = a;
    }
    printf("���� ū ���� %d�Դϴ�.", a);*/

    //ȭ���� 2��. ���� for�� 11111 22222... ���
    /*int i, j;
    for (i = 1; i < 6; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d", i);
        }
        printf("\n");
    }*/
    
    //ȭ���� 3��. ���� for�� 12345 12345.... ���
    int i, j;
    for (i = 1; i < 6; i++) {
        for (j = 1; j < 6; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}