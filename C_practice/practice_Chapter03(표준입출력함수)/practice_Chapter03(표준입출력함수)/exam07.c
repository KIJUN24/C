#include <stdio.h>
#include <stdlib.h>

int main(void) {

	system("title ���� 2�� �Է� �� ���� ���� ���α׷�");

	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	printf("1��° ���� �Է� : ");
	scanf_s("%d", &num1);

	printf("2��° ���� �Է� : ");
	scanf_s("%d", &num2);

	sum = num1 + num2;

	printf("����� : %d", sum);

	return 0;
}