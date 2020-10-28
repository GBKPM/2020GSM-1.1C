#include <stdio.h>
int main() {
    //화요일 1번. arr[10] 가장 큰 수 출력
   /* int arr[10] = { 0 };
    int i = 0, a = 0;
    for (i = 0; i < 10; i++) {
        printf("input number %d : ", i);
        scanf_s("%d", &arr[i]);
        if (arr[i] > a)
            arr[i] = a;
    }
    printf("가장 큰 수는 %d입니다.", a);*/

    //화요일 2번. 이중 for문 11111 22222... 출력
    /*int i, j;
    for (i = 1; i < 6; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d", i);
        }
        printf("\n");
    }*/
    
    //화요일 3번. 이중 for문 12345 12345.... 출력
    int i, j;
    for (i = 1; i < 6; i++) {
        for (j = 1; j < 6; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}