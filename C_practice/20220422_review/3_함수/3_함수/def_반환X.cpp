#include <stdio.h>

void function_without_return();

int main(void)
{
	function_without_return();

	return 0;
}

void function_without_return()
{
	printf("반환 값이 없는 함수\n");
}