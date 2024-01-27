#include <stdio.h>

int main(void) {
	int input_num = 0;
	
	printf("하나의 정수를 입력 : ");
	scanf_s("%d", &input_num);

	if (input_num > 0)
	{
		printf("입력한 정수 %d는(은) 양의 정수입니다.\n", input_num);

	}

	return 0;
}