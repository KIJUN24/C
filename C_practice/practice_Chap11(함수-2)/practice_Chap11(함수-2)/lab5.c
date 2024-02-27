/*
	����-5
	���(��ȯ)�Լ��� ���� ����
	math.h�� double pow(double x, double n);�� ������ ����� �ϴ� ���α׷� �ۼ�(����Լ� ���)
	�Լ� ���� 2��
	1. int input_num() -> ����ڷκ��� �Է��� �޴� �Լ�
	2. int power(int pow_target, int square); -> �ŵ������� ���ϴ� �Լ�
*/

/*
	������
	[main()�Լ� ����]

	���� ����� �Է��ϼ��� : 5
	����(������)�� �Է��ϼ��� : 

	[power()�Լ� ȣ��]

	5�� 4���� 625�Դϴ�.

	[main()�Լ� ����]

	���α׷� ����.
*/

#include<stdio.h>

int input_num();
int power(int pow_target, int square);


int main(void)
{
	int input_target = 0, input_square = 0, result = 0;

	printf("[main()�Լ� ����]\n\n");

	printf("���� ����� �Է��ϼ��� : ");
	input_target = input_num();
	printf("����(������)�� �Է��ϼ��� : ");
	input_square = input_num();
	printf("\n");
	result = power(input_target, input_square);

	printf("%d�� %d���� %d�Դϴ�.\n", input_target, input_square, result);
	printf("\n");
	printf("[main()�Լ� ����]\n\n");
	printf("���α׷� ����.\n");

	return 0;
}


int input_num()
{
	int input = 0;
	scanf_s("%d", &input);

	return input;
}
int power(int pow_target, int square)
{

	if (square == 0)
	{
		printf("[power()�Լ� ȣ��]\n\n");
		return 1;
	}
	else
	{
		printf("%d�� %d��\n", pow_target, square);
		return pow_target * power(pow_target, square - 1);
	}
}