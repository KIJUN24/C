/*
	��Ÿ �б⹮�� ���� �ǽ�-3
	return���� ���� �ǽ�
*/

#include<stdio.h>

int add() {
	int x = 10, y = 20, hap = 0;
	hap = x + y;
	return hap;
}

int main(void) {

	int result = 0;
	printf("add() �Լ��� ���� ����\n");
	result = add();

	printf("x�� 10�̰� y�� 20�϶� �����");
	printf("%d", result);

	return 0;
}