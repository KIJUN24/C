#include <stdio.h>

// ����
void p(int num);

int main(void)
{
	int num = 2;
	p(num);

	// 2 + 3 ��?
	num = num + 3;
	p(num);

	// 5 - 1
	num -= 1;
	p(num);

	// 4 x 3
	num *= 3;
	p(num);

	// 12 / 6
	num /= 6;
	p(num);

	return 0;
}

void p(int num)
{
	printf("num�� %d�Դϴ�.\n", num);
}
