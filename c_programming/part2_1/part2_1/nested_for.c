#include<stdio.h>
int main() {
	/*
	i : ��(�ٱ��� for�� 0~4)
	j : ��(���� for�� 0~4)
	*
	**
	***
	****
	*****
	��Ģ: i=j�� �������� *�� ������
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
	i, j �״�� ���� �ʱ�ȭ�� �� ��
	     *
	    **
	   ***
	  ****
	 *****
	��Ģ: ������Ⱑ �߿�
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