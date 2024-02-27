#include <stdio.h>

void Swap(int a, int b);
void Swap_Addr(int* a, int* b);

int main(void)
{
	// Swap

	int a = 10;
	int b = 20;

	printf("a�� �ּҴ� : %d\n", &a);
	printf("b�� �ּҴ� : %d\n", &b);


	printf("Swap �Լ� �� => a : %d, b : %d\n", a, b);

	// a�� b�� ���� �ٲ۴�.
	Swap(a, b);
	printf("Swap �Լ� �� => a : %d, b : %d\n", a, b);

	// ���� ���� ���� (Call by value) -> ���� �����Ѵٴ� �ǹ�.

	// �ּҰ��� �ѱ��? �޸� ������ �ִ� �ּҰ� ��ü�� �ѱ��... ö���� ó��
	printf("(�ּҰ� ����) Swap �Լ� �� => a : %d, b : %d\n", a, b);
	Swap_Addr(&a, &b);
	printf("(�ּҰ� ����) Swap �Լ� �� => a : %d, b : %d\n", a, b);

	return 0;
}

void Swap(int a, int b)
{
	printf("(Swap �Լ� ��) a�� �ּҴ� : %d\n", &a);
	printf("(Swap �Լ� ��) b�� �ּҴ� : %d\n", &b);

	int temp = a;
	a = b;
	b = temp;
	printf("Swap �Լ� �� => a : %d, b : %d\n", a, b);
}

void Swap_Addr(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(�ּҰ� ����) Swap �Լ� �� => a : %d, b : %d\n", *a, *b);
}