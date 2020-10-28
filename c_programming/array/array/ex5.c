#include <stdio.h>
int main() {
	//정렬
	//오름차순 : 작은수->큰수 1,2,3 or a,b,c...
	//내림차순 : 큰수->작은수 10,9,8 or z,y,x...

	//버블정렬
	int data[5] = { 94,7,67,120,1 };
	int i, j, tmp;
	printf("\n=====정렬 전=====\n");
	for (i = 0; i < 5; i++)
		printf("%4d", data[i]);
	printf("\n\n");

	for (i = 0; i < 5 - 1; i++) {
		for (j = 0; j < 4 - i; j++) {
			if (data[j] > data[j + 1]) {
				tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}
		printf("\n%d번 정렬\n", i + 1);
		for (j = 0; j < 5; j++)
			printf("%4d", data[j]);
	}
	printf("\n\n=====정렬 후=====\n");
	for (i = 0; i < 5; i++)
		printf("%4d", data[i]);
	return 0;
}