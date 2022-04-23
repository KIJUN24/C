#include <stdio.h>

int main(void)
{
	// 아스키코드 : 7bit
	// a : 97
	// A : 65
	// 0 : 48

	printf("%c\n", 'A');
	printf("%d\n", 'A');

	printf("%c\n", '\0');
	printf("%d\n", '\0');

	return 0;
}