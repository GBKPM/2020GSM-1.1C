#include <stdio.h>
int main() {
	//�迭�� ���� ���ڿ� : ���ڰ� 2���̻� �ִ°� 'c': %c, "c" : %s, '':����, "":���ڿ�-�迭����
	char str[100]; //�迭�� �迭�� �̸� ��ü�� �ּ��̴�.
	int alp[26] = { 0 };
	int i = 0;
	printf("input string >> ");
	scanf_s("%s", str, sizeof(str)); //���ڿ�: sizeof�ֱ�, �ּҿ�����X
	
	while (str[i] != '\0') {
		++alp[str[i] - 97];
		i++;
	}

	printf("�Է��� ���ڿ� : %s\n", str);
	for (i = 0; i < 26; i++) {
		if (alp[i] != 0)
			printf("%c : %d\n", i + 97, alp[i]);
	}
	
	
	return 0;
}//����:116 �ؼ� //�б����� �����̴�!!!