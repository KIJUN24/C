#include<stdio.h>

int main(void) {
	
	int input_num = 0;
	int result = 0;

	printf("�ϳ��� ������ �Է� : ");
	scanf_s("%d", &input_num);

	result = input_num % 2;

	if (result != 0)
	{
		printf("�Է��� ���� %d�� Ȧ���Դϴ�.\n", input_num);
	}
	else
	{
		printf("�Է��� ���� %d�� ¦���Դϴ�.\n", input_num);
	}
	
	return 0;
}