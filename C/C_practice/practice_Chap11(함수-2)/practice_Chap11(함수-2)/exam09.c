/*
	��ȯ(���)�Լ�(recursive function, recursive call) �ǽ�-1
	��ȯ(���)�Լ� : �Լ� ȣ�� ��, �� �Լ� ������ �ڱ� �ڽ��� ��� ȣ���ϴ� ���̴�.
	Ż���ڵ尡 ���ٸ� ���ѷ����� ������ �ȴ�.(����)
	���丮�� �ǽ�
*/

#include<stdio.h>

int factorial(int n);

int main(void)
{
	int input = 0, result = 0;

	printf("������ ���丮���� ���ұ��? ");
	scanf_s("%d", &input);

	result = factorial(input);

	printf("%d������ ���͸��� : %d\n", input, result);

	return 0;
}

int factorial(int n)
{
	if (n == 1)	// ����Լ��� ���ѷ����� Ż���ϴ� �ڵ�
	{
		return 1;
	}
	else
	{
		printf("����> %d! : %d * (%d - 1)\n", n, n, n);
		return n * factorial(n - 1);
	}

}