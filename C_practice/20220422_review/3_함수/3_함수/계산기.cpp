#include <stdio.h>

// 선언
void p(int num);

int main(void)
{
	int num = 2;
	p(num);

	// 2 + 3 은?
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
	printf("num은 %d입니다.\n", num);
}
