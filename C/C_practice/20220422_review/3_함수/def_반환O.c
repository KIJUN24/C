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
	printf("반환값이 있는 함수입니다.\n");
	return 10; // 반환값
}