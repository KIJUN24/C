#include <stdio.h>

int sum(int a, int b);

int main(void)
{
    int a = 10, b = 20;
	int result;

    result = sum(a, b);

	printf("result = %d", result);

    return 0;
}

int sum(int a, int b)
{
    int temp;

    temp = a + b;

    return temp;
}