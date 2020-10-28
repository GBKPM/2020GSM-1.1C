#include<stdio.h>
int main() {
	/*
	i : 행(바깥쪽 for문 0~4)
	j : 열(안쪽 for문 0~4)
	*
	**
	***
	****
	*****
	규칙: i=j가 같을때만 *이 찍힌다
	*/
	
	int i, j;
	for (i = 0; i < 5; i++) {
		for(j=0; j <= i; j++) {
			printf("*");
		}
		printf('\n");
	}
	printf("\n\n");
	
	/*
	i, j 그대로 유지 초기화만 할 것
	     *
	    **
	   ***
	  ****
	 *****
	규칙: 공백찍기가 중요
	*/
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 4 - i; j++) {
			printf(" ");	
		}
		for (j = 4 - i; j < 5; j++) {
			printf("*");
		}
		printf("\n");	
	}
	printf("\n\n");
	/*
	*****
	****
	***
	**
	*
	*/
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5 - i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	/*

	*****
	 ****
	  ***
	   **
	    *
	*/
	
	return 0;
	}