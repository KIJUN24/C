#include <stdio.h>

int main(void)
{
	// �ƽ�Ű�ڵ� : 7bit
	// a : 97
	// A : 65
	// 0 : 48

	printf("%c\n", 'A');
	printf("%d\n", 'A');

	printf("%c\n", '\0');
	printf("%d\n", '\0');

	return 0;
}