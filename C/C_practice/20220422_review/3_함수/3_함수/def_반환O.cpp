#include<stdio.h>

int function_with_return();

int main(void)
{
	int ret = function_with_return();

	printf("%d", ret);

	return 0;
}

int function_with_return()
{
	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return 10;
}