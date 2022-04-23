#include <stdio.h>

int add(int add_num1, int add_num2);
int sub(int sub_num1, int sub_num2);
int mul(int mul_num1, int mul_num2);
double div(int div_num1, int div_num2);

int main(void)
{
	int num1 = 40;
	int num2 = 40;

	printf("%d\n", add(num1, num2));
	printf("%d\n", sub(num1, num2));
	printf("%d\n", mul(num1, num2));
	printf("%.1lf\n", div(num1, num2));

	return 0;
}

int add(int add_num1, int add_num2)
{
	return add_num1 + add_num2;
}

int sub(int sub_num1, int sub_num2)
{
	return sub_num1 - sub_num2;
}

int mul(int mul_num1, int mul_num2)
{
	return mul_num1 * mul_num2;
}

double div(int div_num1, int div_num2)
{
	return double(div_num1 / div_num2);
}