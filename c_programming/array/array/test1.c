#include <stdio.h>
int main() {

    //월요일 1번. 1~100 2의 배수 합 구하기
    int number = 1, num = 0;
    while (number <= 100) {
        if (number % 2 == 0) {
            num += number;
        }
        number++;
    }
    printf("1부터 100까지의 수 중 2의 배수의 합은 %d입니다.", num);


    //월요일 2번. arr[10] 사용, 10명의 점수중 세번째, 다번째(?), 마지막 정수 출력
    int arr[10] = { 0 };
    int i = 0;
    for (i = 0; i < 10; i++) {
        printf("input number %d : ", i);
        scanf_s("%d", &arr[i]);
    }
    printf("%d %d\n", arr[2], arr[9]); //다번째가 뭐죠...
        return 0;
}