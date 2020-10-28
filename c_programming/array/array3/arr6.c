#include <stdio.h>
int main() { //3, 6, 9
			 //2, 5, 8
	int i, j, arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	


	for (i = 2; i >= 0; i--) {
		for (j = 0; j < 3; j++)
			printf("%d\t", arr[j][i]);
		printf("\n");
	}
	return 0;
}