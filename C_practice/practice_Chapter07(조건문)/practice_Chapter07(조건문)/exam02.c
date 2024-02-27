#include<stdio.h>

int main(void) {
	
	int input_num = 0;
	int result = 0;

	printf("하나의 정수를 입력 : ");
	scanf_s("%d", &input_num);

	result = input_num % 2;

	if (result != 0)
	{
		printf("입력한 정수 %d는 홀수입니다.\n", input_num);
	}
	else
	{
		printf("입력한 정수 %d는 짝수입니다.\n", input_num);
	}
	
	return 0;
}